import laba1 from "./labas/laba1/index";
import "./style.css";

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
      this[block.type](block.content);
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

  code(content) {
    const el = document.createElement("div");
    const escapedCode = content.replace(/\</g, "&lt;").replace(/\>/g, "&gt;");
    el.innerHTML = `<pre>${escapedCode}</pre>`;
    this.app.appendChild(el);
  },
};

const render = (blocks) => {
  blocks.forEach((block) => renderBlock.render(block));
};

render(laba1.blocks);
