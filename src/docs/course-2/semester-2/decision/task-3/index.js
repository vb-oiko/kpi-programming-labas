import task1 from "./task1/text.md";
// import task2 from "./task2/text.md";
// import task3 from "./task3/text.md";
// import task4 from "./task4/text.md";
// import task5 from "./task5/text.md";
// import task6 from "./task6/text.md";
// import task7 from "./task7/text.md";
// import task8 from "./task8/text.md";
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
];

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 1,
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
