import chart from "./flowchart.flow";
import text from "./text.md";
import code from "./laba1.c";
import "./formula.png";

const laba1 = {
  blocks: [
    {
      title: "",
      type: "markdown",
      content: text,
    },
    {
      title: "Блок-схема алгоритму",
      type: "flowchart",
      content: chart,
    },
    {
      title: "Вихідний код програми",
      type: "code",
      content: code,
    },
  ],
};

export default laba1;
