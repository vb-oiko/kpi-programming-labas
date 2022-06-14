import a_star from "./a_star.mmd";
import greedy from "./greedy.mmd";
import queens from "./queens.mmd";
import text from "./text.md";
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
    content: a_star,
    vars: {
      id: "a_star",
    },
  },
  {
    type: "mermaid",
    content: greedy,
    vars: {
      id: "greedy",
    },
  },
  {
    type: "mermaid",
    content: queens,
    vars: {
      id: "queens",
    },
  },
];

render(blocks);
