import text from "./text.md";
import { render } from "@/core";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "markdown",
    content: text,
  },
];

render(blocks);
