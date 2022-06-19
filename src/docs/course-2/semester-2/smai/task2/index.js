import text from "./text.md";
import constraints from "./constraints.mmd";
import { render } from "@/core";
import "@/style.css";

const blocks = [
  {
    title: "",
    type: "markdown",
    content: text,
  },
  {
    type: "mermaid",
    content: constraints,
    vars: {
      id: "constraints",
    },
  },
];

render(blocks);
