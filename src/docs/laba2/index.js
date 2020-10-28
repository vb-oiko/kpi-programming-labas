import chart from "./flowchart.flow";
import text from "./text.md";
import code from "./code.c";
import "./formula.png";
import { render } from "@/core";
import "@/style.css";

const blocks = [
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

render(blocks);
