import task1 from "./task1.md";
// import task2 from "./task2.md";
// import task3 from "./task3.md";
// import task4 from "./task4.md";
// import task5 from "./task5.md";
// import task6 from "./task6.md";
// import task7 from "./task7.md";
// import task8 from "./task8.md";
// import task9 from "./task9.md";
// import task10 from "./task10.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet-var-1.html";
import "@/style.css";

const contents = [
  task1,
  // task2,
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
