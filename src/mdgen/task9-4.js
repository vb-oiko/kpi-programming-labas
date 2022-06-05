const path = require("path");
const fs = require("fs");
const { METHODS } = require("http");

const task = 4;

const filePath = path.resolve(
  __dirname,
  `../docs/course-2/semester-2/decision/task-9/task-${task}.md`
);

const n = 2;

const dot = (x) => (typeof x === "number" ? " \\cdot " : "");
const newLine = "\\" + "\\";

const b1Text = (y = "y") => `2 \\ln(1 + ${y})`;
const b1Val = (y) => 2 * Math.log(1 + y);
const b1DerText = (y = "y") => `\\frac{2}{1+ ${y}}`;
const b1DerVal = (y) => 2 / (1 + y);

const b2Text = (y = "y") => `4 \\sqrt{${y}}`;
const b2Val = (y) => 4 * Math.sqrt(y);
const b2DerText = (y = "y") => `\\frac{2}{\\sqrt{${y}}}`;
const b2DerVal = (y) => 2 / Math.sqrt(y);

const cText = (y = "y") => `\\frac{3}{2} ${dot(y)}  ${y}`;
const cVal = (y) => 1.5 * y;
const cDerText = (y = "y") => `\\frac{3}{2}`;
const cDerVal = (y) => 1.5;

const round = (x, k = 100) => Math.round(x * k) / k;

const yStar = 3.55;
const y1 = 0.333;
const y2 = 1.777;

const v12 = round(b1Val(yStar) + b2Val(yStar) - cVal(yStar));
const v1 = Math.max(0, round(b1Val(y1) - cVal(y1)));
const v2 = Math.max(0, round(b2Val(y2) - cVal(y2)));

const v_1 = round(0.5 * v1 + 0.5 * (v12 - v2));
const v_2 = round(0.5 * v2 + 0.5 * (v12 - v1));

const nCore = round(0.5 * (b1Val(yStar) + b2Val(yStar)));
const lambda0 = round(cVal(yStar) / n);
const b2y2 = round(b2Val(yStar)) / 2;
const b1y2 = round(b1Val(yStar)) / 2;
const lambda1 = round(cVal(yStar) - b2y2);

const r1Text = "\\frac{4}{3+3y}";
const r2Text = "\\frac{4}{3 \\sqrt{y}}";
const r1Val = (y) => 4 / (3 + 3 * y);
const r2Val = (y) => 4 / (3 * Math.sqrt(y));

const rPoly = "3y^{\\frac{3}{2}} -4y -y^{\\frac{1}{2}} +4 = 0";

const yStarR = 3.55;
r1 = round(r1Val(yStarR), 1000);
r2 = round(r2Val(yStarR), 1000);

yOver = 0.97;

const lines = [];

lines.push(
  `# Задача 9.${task}

Нехай є економіка виробництва суспільного продукту при наступних початкових даних:

$$ n = ${n}, b_1(y) = ${b1Text()}, b_2(y) = ${b2Text()} $$

Функція витрат має вигляд $С(y) = ${cText()} $.

1. Побудувати кооперативну ТП-гру і знайти оптимальний план об'єму випуску $y^*$, а також розподілення витрат, яке належить ядру гри.
2. Знайти розподілення витрат, яке відповідає вектору Шеплі, а також $N$-ядру.
3. Знайти точку часткової рівноваги і відповідне розподілення витрат.
4. Визначити розподілення витрат, яке відповідає егалітарному еквіваленту і перевірити приналежність його ядру гри.

Розв'язок`,
  `1. Знаходимо оптимальний план випуску:

$$ \\sum_{i=1}^${n} b_i'(y) = c\(y) $$

$$ b_1'(y) + b_2'(y) = c'\(y) $$

$$ ${b1DerText()} + ${b2DerText()} = ${cDerText()} $$

$$ y^* = ${yStar} $$

Оптимальні витрати: 

$$ c(y^*) = ${cText(yStar)} = ${round(cVal(yStar))} $$

Знаходимо оптимальний прибуток коаліції:

$$ V(1,2) = b_1(y^*) + b_2(y^*) - c(y^*) = ${b1Text(yStar)} + ${b2Text(
    yStar
  )} - ${cText(yStar)} = ${v12} $$`,
  `Знайдемо оптимальний прибуток учасників поза коаліцією: 

Для першого учасника:

$$ V(1) = \\underbrace{\\max}_y \\left \\lbrace ${b1Text()} - ${cText()} ;0 \\right \\rbrace  $$

$$ b_1'(y) = c'\(y) $$

$$ ${b1DerText()} = ${cDerText()} $$

$$ y = ${y1} $$

$$ V(1) = ${v1} $$

Для другого учасника:

$$ V(2) = \\underbrace{\\max}_y \\left \\lbrace 0; ${b2Text()} - ${cText()} \\right \\rbrace  $$

$$ b_2'(y) = c'\(y) $$

$$ ${b2DerText()} = ${cDerText()} $$

$$ y = ${y2} $$

$$ V(2) = ${v2} $$`,
  `Кооперативний прибуток:

$$ \\Delta V = V(1,2) - V(1) - V(2) = ${v12} - ${v1} - ${v2} = ${round(
    v12 - v1 - v2
  )}$$

Визначаємо умови для ядра гри:

$$ b_1(y^*) - x_1^* \\ge V(1) $$

$$ x_1^* \\le b_1(y^*) - V(1) $$

$$ x_1^* \\le ${round(b1Val(yStar))} - ${v1} $$

$$ x_1^* \\le ${round(b1Val(yStar) - v1)} $$

$$ b_2(y^*) - x_2^* \\ge V(2) $$

$$ x_2^* \\le b_2(y^*) - V(2) $$

$$ x_2^* \\le ${round(b2Val(yStar))} - ${v2} $$

$$ x_2^* \\le ${round(b2Val(yStar) - v2)} $$

В коаліції $ x_1^* + x_2^* = ${round(v12)}$. Отже:

$$ \\begin{cases}
  x_1^* \\le ${round(b1Val(yStar) - v1)} ${newLine}
  x_2^* \\le ${round(b2Val(yStar) - v2)} ${newLine}
  x_1^* + x_2^* \\le ${round(v12)}
\\end{cases}
$$

Побудуємо область допустимих рішень цих нерівностей.

![img9-${task}](img9-${task}.png)

2. Знайдемо розподіл прибутку згідно з вектором Шеплі (маргінальні внески)

$$ \\Delta V_1^1 = V(1) - V(0) = V(1) = ${v1} $$

$$ \\Delta V_1^2 = V(1,2) - V(2) = ${v12} - ${v2} = ${round(v12 - v2)} $$

$$ \\Delta V_2^1 = V(2) - V(0) = V(2) = ${v2} $$

$$ \\Delta V_2^2 = V(1,2) - V(1) = ${v12} - ${v1} = ${round(v12 - v1)} $$

$$ V_1 = \\frac{1}{2} V(1) + \\frac{1}{2} (V(1,2) - V(2)) = 
\\frac{1}{2} \\cdot ${v1} + \\frac{1}{2} (${v12} - ${v2}) =
${round(0.5 * v1 + 0.5 * (v12 - v2))}
$$

$$ V_2 = \\frac{1}{2} V(2) + \\frac{1}{2} (V(1,2) - V(1)) = 
\\frac{1}{2} \\cdot ${v2} + \\frac{1}{2} (${v12} - ${1}) =
${round(0.5 * v2 + 0.5 * (v12 - v1))}
$$

Загальний прибуток

$$ \\vartheta_1 + \\vartheta_2 = V(1,2) = ${v12}$$

Знайдемо витрати учасників

$$ b_1(y^*) - x_1^* = V_1 $$

$$ x_1^* = b_1(y^*) - V_1 $$

$$ x_1^* = ${round(b1Val(yStar))} - ${v_1} $$

$$ x_1^* = ${round(b1Val(yStar) - v_1)} $$

$$ b_2(y^*) - x_1^* = V_2 $$

$$ x_2^* = b_2(y^*) - V_2 $$

$$ x_2^* = ${round(b2Val(yStar))} - ${v_2} $$

$$ x_2^* = ${round(b2Val(yStar) - v_2)} $$

$$ x_1^* + x_2^* = ${round(b1Val(yStar) - v_1)} + ${round(b2Val(yStar) - v_2)} =
${round(b1Val(yStar) - v_1 + b2Val(yStar) - v_2)}  $$

Знайдемо N-ядро

$$ \\frac{1}{2} \\left( b_1(y^*) + b_2(y^*) \\right) = 
\\frac{1}{2} (${round(b1Val(yStar))} + ${round(b2Val(yStar))}) = ${nCore}
$$

$$ \\lambda_0 = \\frac{C(y^*)}{n} = \\frac{${round(cVal(yStar))}}{${n}} =
${round(cVal(yStar) / n)}  $$

$$ \\frac{\\min(b_1(y^*), b_2(y^*))}{2} = 
\\frac{\\min(${round(b1Val(yStar))}, ${round(b2Val(yStar))})}{2} =
\\frac{${round(Math.min(b1Val(yStar), b2Val(yStar)))}}{2} = 
${round(Math.min(b1Val(yStar), b2Val(yStar)) / 2)}
$$`,

  lambda0 < b2y2 / 2
    ? `
$$ \\lambda_0 < \\frac{b_2(y^*)}{2} $$

$$ \\lambda^* = \\lambda_0 = ${lambda0} $$

$$ x_1^* = x_2^* = \\lambda_0 = ${lambda0} $$`
    : `
$$ \\lambda_0 > \\frac{b_2(y^*)}{2} $$

$$ x_2^* = \\frac{b_2(y^*)}{2} = ${b2y2}$$

$$ \\lambda_1 = \\frac{1}{n-1} (c-x_1^*) = ${round(cVal(yStar))} - ${b2y2} =
${round(cVal(yStar) - b2y2)} $$

$$ \\frac{b_1 (y^*)}{2} = ${b1y2} $$

$$ \\lambda^* = \\lambda_1 = ${lambda1} $$

$$ x_1^* = \\lambda^* = ${lambda1} $$

`,

  `3. Знайдемо розподіл витрат, що відповідає дольовій рівновазі по Лінделу.

$$ \\lbrace b_1(y^*) - r_1 C(y^*) \\rbrace = 
\\max \\lbrace ${b1Text()} - r_1 ${cText()} \\rbrace
$$

$$ ${b1DerText()} - r_1 ${cDerText()} = 0$$ 

$$ r_1 = ${r1Text} $$

$$ \\lbrace b_2(y^*) - r_2 C(y^*) \\rbrace = 
\\max \\lbrace ${b2Text()} - r_2 ${cText()} \\rbrace
$$

$$ ${b2DerText()} - r_2 ${cDerText()} = 0$$ 

$$ r_2 = ${r2Text} $$

$$ ${r1Text} + ${r2Text} = 1 $$

$$ ${rPoly} $$

$$ y^* ${yStarR === Math.round(yStarR) ? "=" : "\\approx"} ${yStarR} $$

$$ r_1 \\approx ${r1} $$

$$ r_2 \\approx ${r2} $$

$$ x_1^* = r_1 C(y^*) = ${r1} \\cdot ${round(cVal(yStar))} =
${round(cVal(yStar) * r1)}
$$

$$ x_2^* = r_2 C(y^*) = ${r2} \\cdot ${round(cVal(yStar))} =
${round(cVal(yStar) * r2)}
$$

4. Знайдемо егалітарний еквівалент

$$ \\sum_{i=1}^n b_i (\\overline{y}) = \\sum_{i=1}^n b_i (y^*) - c(y^*) $$

$$ ${b1Text("\\overline{y}")} + ${b2Text("\\overline{y}")} =
${b1Text("y^*")} + ${b2Text("y^*")} - ${cText("{y^*}")}
$$

$$ ${b1Text("\\overline{y}")} + ${b2Text("\\overline{y}")} = ${v12}$$

$$ \\overline{y} = ${yOver} $$

$$ x_i^* = b_i(y^*) - b_i(\\overline{y}) $$

$$ x_1^* = b_1(y^*) - b_1(\\overline{y}) =
${round(b1Val(yStar))} - ${round(b1Val(yOver))} = 
${round(b1Val(yStar) - b1Val(yOver))}
$$

$$ x_2^* = b_2(y^*) - b_2(\\overline{y}) =
${round(b2Val(yStar))} - ${round(b2Val(yOver))} = 
${round(b2Val(yStar) - b2Val(yOver))}
$$

$$ x_1^* + x_2^* = 
${round(b1Val(yStar) - b1Val(yOver))} + ${round(b2Val(yStar) - b2Val(yOver))} =
${round(b1Val(yStar) - b1Val(yOver)) + round(b2Val(yStar) - b2Val(yOver))}
 $$

`
);

fs.writeFile(filePath, lines.join("\n"), (a) => {
  console.log(a);
});
