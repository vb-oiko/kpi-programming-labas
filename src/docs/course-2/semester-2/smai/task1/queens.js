const max = 3;

const range = (n) =>
  Array(n)
    .fill(null)
    .map((_, i) => i + 1);

const offset = (k) => [-k, 0, k];

let state = [
  { x: 0, y: 0 },
  { x: 0, y: 1 },
  { x: 3, y: 0 },
];

const getActions = ({ x, y }) => {
  return [{ x, y }];
};

const move = ({ x, y }, { dx, dy }) =>
  x + dx > 0 && x + dx <= 3 && y + dy > 0 && y + dy <= 3
    ? { x: x + dx, y: y + dy }
    : null;

const getMoves = (state, { x, y }) =>
  [-1, 0, 1]
    .map((dx) =>
      [-1, 0, 1]
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

console.warn(getMoves(state, { x: 0, y: 0 }));

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

console.warn(logState(state));
const moves = getMoves(state, state[0]);
moves.forEach(({ x, y }) => {
  console.warn(logState([{ x, y }, state[1], state[2]]));
});
