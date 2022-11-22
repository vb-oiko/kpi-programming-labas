import text from "./text.md";
import graph from "./graph.mmd";
import graph1 from "./graph1.mmd";
import graph2 from "./graph2.mmd";
import graph3 from "./graph3.mmd";
import graph4 from "./graph4.mmd";
import graph5 from "./graph5.mmd";
import graph6 from "./graph6.mmd";
import graph7 from "./graph7.mmd";
import graph8 from "./graph8.mmd";
import graph9 from "./graph9.mmd";
import graph10 from "./graph10.mmd";
import graph11 from "./graph11.mmd";
import graph12 from "./graph12.mmd";
import graph13 from "./graph13.mmd";
import graph14 from "./graph14.mmd";
import graph15 from "./graph15.mmd";

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
    content: graph,
    vars: {
      id: "graph",
    },
  },
  ...[
    graph1,
    graph2,
    graph3,
    graph4,
    graph5,
    graph6,
    graph7,
    graph8,
    graph9,
    graph10,
    graph11,
    graph12,
    graph13,
    graph14,
    graph15,
  ].map((content, id) => ({
    type: "mermaid",
    content,
    vars: {
      id: `graph${id + 1}`,
    },
  })),
];

render(blocks);
