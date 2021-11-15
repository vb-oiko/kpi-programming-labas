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
      professor: "викладач Зелікман А.В.",
      course: "Дослідження операцій",
      title: "модульної контрольної",
    },
  },
  {
    title: "",
    type: "markdown",
    content: text,
  },
];

render(blocks);
