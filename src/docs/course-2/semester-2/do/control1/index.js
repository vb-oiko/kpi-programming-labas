import task1 from "./task1.md";
import task2 from "./task2.md";
import task3 from "./task3.md";
import task4 from "./task4.md";
import task5 from "./task5.md";

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
    content: task1,
  },
  {
    title: "",
    type: "markdown",
    content: task2,
  },
  {
    title: "",
    type: "markdown",
    content: task3,
  },
  {
    title: "",
    type: "markdown",
    content: task4,
  },
  {
    title: "",
    type: "markdown",
    content: task5,
  },
];

render(blocks);
