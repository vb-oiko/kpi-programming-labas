import text from "./text.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet.html";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 1,
      professor: "доц. Спекторський І.Я.",
      course: "Математична статистика",
      title: "розрахункової",
    },
  },
  {
    title: "",
    type: "markdown",
    content: text,
  },
];

render(blocks);
