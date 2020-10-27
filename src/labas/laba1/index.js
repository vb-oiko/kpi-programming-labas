import chart from "./flowchart.flow";
import text from "./text.md";
import code from "./laba1.c";
import "./formula.png";
import { render } from "@/core";

const laba1 = [
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
];

render(laba1);
