import task_1_1 from "./task-1-1/text.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet.html";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 4,
      professor: "проф. Зайченко Ю.П.",
      course: "Теорія прийняття рішень",
      title: "контрольної",
    },
  },
  {
    title: "",
    type: "markdown",
    content: task_1_1,
  },
];

render(blocks);
