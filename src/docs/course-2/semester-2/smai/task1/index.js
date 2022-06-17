import a_star from "./a_star.mmd";
import greedy from "./greedy.mmd";
import dfs from "./dfs.mmd";
import bfs from "./bfs.mmd";
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
    content: dfs,
    vars: {
      id: "dfs",
    },
  },
  {
    type: "mermaid",
    content: bfs,
    vars: {
      id: "bfs",
    },
  },
];

render(blocks);
