import chart from "./flowchart.flow";
import text from "./text.md";
import code from "./laba1.c";
import { render } from "@/core";
import "@/style.css";

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
