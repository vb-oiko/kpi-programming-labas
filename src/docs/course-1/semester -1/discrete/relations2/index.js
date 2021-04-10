import text from "./text.md";
import text1 from "./text1.md";
import chart from "./chart.mmd";
import { render } from "@/core";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "markdown",
    content: text,
  },
  {
    title: "",
    type: "mermaid",
    content: chart,
  },
  {
    title: "",
    type: "markdown",
    content: text1,
  },
];

render(blocks);
