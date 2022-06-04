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
import task4_2 from "./task4-2.md";
import task4_3 from "./task4-3.md";
import task5_1 from "./task5-1.md";
import task5_2 from "./task5-2.md";
import task5_3 from "./task5-3.md";
import task6_1 from "./task6-1.md";
import task6_2 from "./task6-2.md";
import task6_3 from "./task6-3.md";
import task7_1 from "./task7-1.md";
import task7_2 from "./task7-2.md";
import task7_3 from "./task7-3.md";
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
  // task4_1,
  // task4_2,
  // task4_3,
  // task5_1,
  // task5_2,
  // task5_3,
  // task6_1,
  // task6_2,
  // task6_3,
  // task7_1,
  // task7_2,
  task7_3,
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
