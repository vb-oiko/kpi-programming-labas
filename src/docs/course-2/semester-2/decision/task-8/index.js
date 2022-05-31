import task1_1 from "./task1-1.md";
import task1_2 from "./task1-2.md";
import task1_3 from "./task1-3.md";
import { render } from "@/core";
import titleSheet from "@/common/tpr-title-sheet.html";
import "@/style.css";

const contents = [
  //
  task1_1,
  task1_2,
  task1_3,
];

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 8,
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
