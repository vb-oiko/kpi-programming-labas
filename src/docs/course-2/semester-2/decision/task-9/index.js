import task1 from "./task-1.md";

import { render } from "@/core";
import titleSheet from "@/common/tpr-title-sheet.html";
import "@/style.css";

const contents = [
  //
  task1,
];

const blocks = [
  // {
  //   title: "",
  //   type: "html",
  //   content: titleSheet,
  //   vars: {
  //     labaNo: 7,
  //     professor: "проф. Зайченко Ю.П.",
  //     course: "Теорія прийняття рішень",
  //     title: "контрольної",
  //   },
  // },
  ...contents.map((task) => ({
    title: "",
    type: "markdown",
    content: task,
  })),
];

render(blocks);
