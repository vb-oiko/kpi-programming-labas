import task1 from "./task-1/task1.md";
import task2 from "./task-2/task2.md";
import { render } from "@/core";
import titleSheet from "@/common/tpr-title-sheet.html";
import "@/style.css";

const contents = [
  task1,
  task2,
  // task3,
  // task4,
  // task5,
  // task6,
  // task7,
  // task8,
  // task9,
  // task10,
];

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 7,
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
