import a_star from "./a_star.mmd";
import text from "./text.md";
// import titleSheet from "@/common/programming-laba-title-sheet.html";
import { render } from "@/core";
import "@/style.css";

const blocks = [
  // {
  //   title: "",
  //   type: "html",
  //   content: titleSheet,
  //   vars: {
  //     labaNo: 1,
  //   },
  // },
  {
    title: "",
    type: "markdown",
    content: text,
  },
  {
    title: "Блок-схема алгоритму",
    type: "mermaid",
    content: a_star,
    vars: {
      id: "a_star",
    },
  },
];

render(blocks);
