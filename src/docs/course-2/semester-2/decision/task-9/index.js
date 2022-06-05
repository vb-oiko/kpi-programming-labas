import task1 from "./task-1.md";
import task2 from "./task-2.md";
import task3 from "./task-3.md";
import task4 from "./task-4.md";
import task5 from "./task-5.md";
import task6 from "./task-6.md";
import task7 from "./task-7.md";

import { render } from "@/core";
import titleSheet from "@/common/tpr-title-sheet.html";
import "@/style.css";

const contents = [
  //
  // task1,
  // task2,
  // task3,
  // task4,
  // task5,
  // task6,
  task7,
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
