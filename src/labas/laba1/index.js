import chart from "./flowchart.flow";
import text from "./text.md";
import code from "./laba1.c";
import "./formula.png";

export default {
  render() {
    const diagram = flowchart.parse(chart);
    diagram.drawSVG("diagram");

    const textEl = document.getElementById("text");
    textEl.innerHTML = text;

    const codeEl = document.getElementById("code");
    const escapedCode = code.replace(/\</g, "&lt;").replace(/\>/g, "&gt;");
    codeEl.innerHTML = `<pre>${escapedCode}</pre>`;
  },
};
