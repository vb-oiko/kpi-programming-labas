import hljs from "highlight.js/lib/core";
import c from "highlight.js/lib/languages/c-like";
import "highlight.js/styles/github.css";

hljs.registerLanguage("c", c);

const renderBlock = {
  app: document.getElementById("app"),

  addTitle(block) {
    const { title } = block;
    if (title) {
      const el = document.createElement("h2");
      el.classList.add("page-break-before");
      el.innerText = title;
      this.app.appendChild(el);
    }
  },

  render(block) {
    this.addTitle(block);
    try {
      this[block.type](block.content, block.vars);
    } catch (err) {
      throw new Error(`Wrong type of block: ${block.type}`);
    }
  },

  flowchart(content) {
    const diagram = flowchart.parse(content);
    const el = document.createElement("div");
    el.classList.add("flowchart");
    this.app.appendChild(el);
    diagram.drawSVG(el);
  },

  markdown(content) {
    const el = document.createElement("div");
    el.innerHTML = content;
    this.app.appendChild(el);
  },

  html(content, vars) {
    const el = document.createElement("div");
    el.innerHTML = Object.keys(vars).reduce((acc, key) => {
      const reg = RegExp(`\{\{${key}\}\}`, "g");
      return acc.replace(reg, vars[key]);
    }, content);
    this.app.appendChild(el);
  },

  code(content) {
    const el = document.createElement("div");
    const escapedCode = content.replace(/\</g, "&lt;").replace(/\>/g, "&gt;");
    el.innerHTML = `<pre><code class="c">${escapedCode}</code></pre>`;
    this.app.appendChild(el);
  },
};

export const render = (blocks) => {
  blocks.forEach((block) => renderBlock.render(block));
  hljs.initHighlightingOnLoad();
};
