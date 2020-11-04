const path = require("path");
const fs = require("fs");
const webpack = require("webpack");
const HtmlWebpackPlugin = require("html-webpack-plugin");
const { CleanWebpackPlugin } = require("clean-webpack-plugin");

const docsPath = path.resolve(__dirname, "src/docs/");

const getSubFolders = (path) =>
  fs
    .readdirSync(path)
    .filter((filename) => fs.statSync(`${path}/${filename}`).isDirectory());

const getAllFolders = (path) => {
  const folders = getSubFolders(path);

  return folders
    .map((folder) => {
      const subFolders = getAllFolders(`${path}/${folder}`);
      return subFolders.length
        ? subFolders.map((subFolder) => `${folder}/${subFolder}`)
        : folder;
    })
    .flat();
};

const toSnakeCase = (str) => str.replace(/\//g, "-");

const htmlPageNames = getAllFolders(docsPath);

const multipleHtmlPlugins = htmlPageNames.map((name) => {
  return new HtmlWebpackPlugin({
    template: `./src/core/template.html`, // relative path to the HTML files
    filename: `${name}.html`, // output HTML files
    chunks: [toSnakeCase(name)], // respective JS files,
  });
});

const entry = htmlPageNames.reduce(
  (acc, page) => ({
    ...acc,
    [toSnakeCase(page)]: `./src/docs/${page}/index.js`,
  }),
  {
    main: "./src/index.js",
  }
);

module.exports = {
  resolve: {
    alias: {
      ["@"]: path.resolve(__dirname, "src/"),
    },
  },
  entry,
  module: {
    rules: [
      { test: /\.css$/, use: ["style-loader", "css-loader"] },
      {
        test: /\.flow$|\.mmd$|\.html$|\.c$/i,
        use: "raw-loader",
      },
      {
        test: /\.md$/,
        use: [
          {
            loader: "html-loader",
          },
          {
            loader: "markdown-latex-loader",
            options: {
              div: true,
            },
          },
        ],
      },
      {
        test: /\.(png|jpe?g|gif)$/i,
        loader: "file-loader",
        options: {
          name(resourcePath, resourceQuery) {
            return "[folder]-[name].[ext]";
          },
          outputPath: "images",
        },
      },
    ],
  },
  output: {
    path: path.resolve(__dirname, "docs"),
  },
  plugins: [
    new CleanWebpackPlugin(),
    new webpack.DefinePlugin({
      PAGES: JSON.stringify(htmlPageNames),
    }),
    new HtmlWebpackPlugin({
      template: "./src/core/index.html",
      chunks: ["main"],
    }),
    ...multipleHtmlPlugins,
  ],
};
