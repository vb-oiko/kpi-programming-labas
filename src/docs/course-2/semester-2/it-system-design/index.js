import text from "./text.md";
import { render } from "@/core";
import titleSheet from "@/common/laba-title-sheet-var-2.html";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "html",
    content: titleSheet,
    vars: {
      labaNo: 1,
      professor: "доц. Коваленко А.Є.",
      course: "Проектування інформаційних систем",
      title: "залікової контрольної",
      variant: 21,
    },
  },
  {
    title: "",
    type: "markdown",
    content: text,
  },
];

render(blocks);
