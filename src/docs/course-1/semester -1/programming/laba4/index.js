import chart from "./flowchart.mmd";
import text from "./text.md";
import code from "./code.c";
import titleSheet from "@/common/programming-laba-title-sheet.html";
import { render } from "@/core";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 4,
    },
  },
  {
    title: "",
    type: "markdown",
    content: text,
  },
  {
    title: "Блок-схема алгоритму",
    type: "mermaid",
    content: chart,
    vars: {
      id: "flowchart",
    },
  },
  {
    title: "Вихідний код програми",
    type: "code",
    content: code,
    vars: {
      id: "code",
    },
  },
];

render(blocks);
