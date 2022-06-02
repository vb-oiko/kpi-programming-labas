import task1_1 from "./task1-1.md";
import task1_2 from "./task1-2.md";
import task1_3 from "./task1-3.md";
import task2_1 from "./task2-1.md";
import task2_2 from "./task2-2.md";
import task2_3 from "./task2-3.md";
import task3_1 from "./task3-1.md";
import task3_2 from "./task3-2.md";
import task3_3 from "./task3-3.md";
import task4_1 from "./task4-1.md";
import { render } from "@/core";
import titleSheet from "@/common/tpr-title-sheet.html";
import "@/style.css";

const contents = [
  //
  // task1_1,
  // task1_2,
  // task1_3,
  // task2_1,
  // task2_2,
  // task2_3,
  // task3_1,
  // task3_2,
  // task3_3,
  task4_1,
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
