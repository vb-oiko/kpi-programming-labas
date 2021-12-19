import task_1 from "./task1.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet-var-1.html";
import "@/style.css";

const contents = [task_1];

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 2,
      professor: "проф. Зайченко Ю.П.",
      course: "Теорія прийняття рішень",
      title: "контрольної",
    },
  },
  ...contents.map((task) => ({
    title: "",
    type: "markdown",
    content: task,
  })),
];

render(blocks);
