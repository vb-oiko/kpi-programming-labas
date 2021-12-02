import task1 from "./task1.md";

import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet-var-1.html";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 1,
      professor: "доцент Савченко І.В.",
      course: "Дослідження операцій",
      title: "Лабораторна",
    },
  },
  {
    title: "",
    type: "markdown",
    content: task1,
  },
];

render(blocks);
