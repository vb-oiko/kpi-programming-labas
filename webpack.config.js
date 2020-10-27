const path = require("path");
const fs = require("fs");
const HtmlWebpackPlugin = require("html-webpack-plugin");

const docsPath = path.resolve(__dirname, "src/docs/");
const htmlPageNames = fs
  .readdirSync(docsPath)
  .filter((filename) => fs.statSync(`${docsPath}/${filename}`).isDirectory());

const multipleHtmlPlugins = htmlPageNames.map((name) => {
  return new HtmlWebpackPlugin({
    template: `./src/core/template.html`, // relative path to the HTML files
    filename: `${name}.html`, // output HTML files
    chunks: [`${name}`], // respective JS files
  });
});

module.exports = {
  resolve: {
    alias: {
      ["@"]: path.resolve(__dirname, "src/"),
    },
  },
  entry: {
    main: "./src/index.js",
    laba1: "./src/docs/laba1/index.js",
    laba2: "./src/docs/laba2/index.js",
  },
  module: {
    rules: [
      { test: /\.css$/, use: ["style-loader", "css-loader"] },
      {
        test: /\.flow$|\.c$/i,
        use: "raw-loader",
      },
      {
        test: /\.md$/,
        use: [
          {
            loader: "html-loader",
          },
          {
            loader: "markdown-loader",
            options: {
              /* your options here */
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
    path: path.resolve(__dirname, "dist"),
  },
  plugins: [
    new HtmlWebpackPlugin({
      template: "./src/index.html",
      chunks: ["main"],
    }),
  ].concat(multipleHtmlPlugins),
};
