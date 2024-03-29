import chart from "./flowchart.flow";
import text from "./text.md";
import text1 from "./text1.md";
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
      labaNo: 1,
    },
  },
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
  {
    title: "Скріншоти виконання програми",
    type: "markdown",
    content: text1,
  },
];

render(blocks);
