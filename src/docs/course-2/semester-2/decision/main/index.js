import task_1_1 from "../task-1-1/text.md";
import task_1_2 from "../task-1-2/text.md";
import task_1_3 from "../task-1-3/text.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet.html";
import "@/style.css";

const contents = [task_1_1, task_1_2, task_1_3];

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 4,
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
