import task_1_1 from "./task-1-1/text.md";
import task_1_2 from "./task-1-2/text.md";
import task_1_3 from "./task-1-3/text.md";
import task_1_4 from "./task-1-4/text.md";
import task_1_5 from "./task-1-5/text.md";
import task_1_6 from "./task-1-6/text.md";
import task_1_7 from "./task-1-7/text.md";
import task_1_8 from "./task-1-8/text.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet-var-1.html";
import "@/style.css";

const contents = [
  task_1_1,
  task_1_2,
  task_1_3,
  task_1_4,
  task_1_5,
  task_1_6,
  task_1_7,
  task_1_8,
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
