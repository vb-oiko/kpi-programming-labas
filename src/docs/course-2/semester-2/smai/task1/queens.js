let state = [
  { x: 0, y: 0 },
  { x: 0, y: 1 },
  { x: 0, y: 2 },
];

const move = ({ x, y }, { dx, dy }) =>
  x + dx > 0 && x + dx <= 3 && y + dy > 0 && y + dy <= 3
    ? { x: x + dx, y: y + dy }
    : null;

const getMoves = (state, { x, y }) =>
  [0, 1]
    .map((dx) =>
      [0, 1]
        .map((dy) => {
          const result = [];
          for (d of [1, 2, 3]) {
            const newX = x + dx * d;
            const newY = y + dy * d;
            if (state.some(({ x: sx, y: sy }) => sx === newX && sy === newY)) {
              break;
            }
            if (dx === 0 && dy === 0) {
              continue;
            }
            if (newX < 0 || newX > 3 || newY < 0 || newY > 3) {
              continue;
            }
            result.push({ x: newX, y: newY });
          }
          return result;
        })
        .flat()
    )
    .flat()
    .filter(Boolean);

// console.warn(getMoves(state, { x: 0, y: 0 }));

const logState = (state) => {
  return [0, 1, 2, 3].map((i) => {
    return [0, 1, 2, 3].map((j) => {
      if (state.some(({ x, y }) => x === i && y === j)) {
        return "▣";
      }
      return "□";
    });
  });
};

const indexToLetterMap = {
  0: "a",
  1: "b",
  2: "c",
  3: "d",
};

const indexState = (state) => {
  return state
    .map(({ x, y }) => `${indexToLetterMap[x]}${y + 1}`)
    .sort()
    .join("");
};

const isTargetState = ([
  { x: x1, y: y1 },
  { x: x2, y: y2 },
  { x: x3, y: y3 },
]) =>
  x1 !== x2 &&
  x1 !== x3 &&
  x2 !== x3 &&
  y1 !== y2 &&
  y1 !== y3 &&
  y2 !== y3 &&
  Math.abs(x1 - x2) !== Math.abs(y1 - y2) &&
  Math.abs(x1 - x3) !== Math.abs(y1 - y3) &&
  Math.abs(x3 - x2) !== Math.abs(y3 - y2);

const getCounter = () => {
  let counter = 0;
  const count = () => {
    counter += 1;
    return counter;
  };

  const resetCounter = () => {
    counter = 0;
  };

  return { count, resetCounter };
};

const { count: nodeId } = getCounter();

const logMove = (state, newState, i) => {
  const index = indexState(state);
  const newIndex = indexState(newState);
  return `${index} -->${
    i ? "|" + i + "|" + newIndex : "" + newIndex + nodeId()
  }(${newIndex})${isTargetState(newState) ? ":::targetState" : ""}`;
};

let i = 1;
const usedStates = new Set();

const getAllNewStates = (state) => {
  return [
    getMoves(state, state[0]).map(({ x, y }) => [{ x, y }, state[1], state[2]]),
    getMoves(state, state[1]).map(({ x, y }) => [state[0], { x, y }, state[2]]),
    getMoves(state, state[2]).map(({ x, y }) => [state[0], state[1], { x, y }]),
  ].flat();
};

const { count, resetCounter } = getCounter();

const getLogger = () => {
  let content = `flowchart LR
  classDef targetState fill:#f9f,stroke:#333,stroke-width:4px;`;

  return {
    log: (s) => {
      content = `${content}\n${s}`;
    },
    flush: (filename) => {
      console.log(content);
      const fs = require("fs");

      try {
        fs.writeFileSync(
          `./src/docs/course-2/semester-2/smai/task1/${filename}.mmd`,
          content
        );
      } catch (err) {
        console.error(err);
      }
    },
  };
};

const { log, flush } = getLogger();

let solutionFound = false;

const solveByDepthFirstSearch = (prevState, state) => {
  if (solutionFound) {
    return;
  }

  if (prevState && !usedStates.has(indexState(state))) {
    const nodeId = count();
    usedStates.add(indexState(state));
    log(logMove(prevState, state, nodeId));
  }

  if (isTargetState(state)) {
    solutionFound = true;
    return;
  }

  const newStates = getAllNewStates(state).filter(
    (s) => !usedStates.has(indexState(s))
  );
  if (newStates.length === 0) {
    return;
  }

  newStates.forEach((newState) => {
    log(logMove(state, newState));
  });
  newStates.forEach((newState) => {
    solveByDepthFirstSearch(state, newState);
  });
};

solveByDepthFirstSearch(null, state);
flush("dfs");
