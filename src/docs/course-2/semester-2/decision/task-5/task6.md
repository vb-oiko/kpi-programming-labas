### Задача 6. Варіант 1 

Перевірити, чи є транзитивним нечітке відношення $R$, задане функцією приналежності $\mu_R (x, y)$, виду:

$$ \begin{array}{|c|c|c|c|c|} \hline
R & x_1 & x_2 & x_3 & x_4 \\ \hline
x_1 & 0.9 & 0.2 & 0.2 & 0.4 \\ \hline
x_2 & 0 & 0.6 & 0.5 & 0.3 \\ \hline
x_3 & 0.1 & 0.8 & 0.9 & 0.3 \\ \hline
x_4 & 0.6 & 0.9 & 0.3 & 0.5 \\ \hline
\end{array}$$

### Розв'язок

Побудуємо матрицю значень функції приналежності $\mu_{RR} (x, y)$ для  максимінної композиції $RR$ за формулою:

$$ \mu_{RR} (x, y) = \sup_{z \in X} \min \{ \mu_R(x,z); \mu_R(z,y) \} $$

$$ \begin{array}{|c|c|c|c|c|} \hline
RR & x_1 & x_2 & x_3 & x_4 \\ \hline
x_1 & 0.9 & 0.4 & 0.3 & 0.4 \\ \hline
x_2 & 0.3 & 0.6 & 0.5 & 0.3 \\ \hline
x_3 & 0.3 & 0.8 & 0.9 & 0.3 \\ \hline
x_4 & 0.6 & 0.6 & 0.5 & 0.5 \\ \hline
\end{array}$$

Зауважимо, що умова $RR \sube R$ не виконується, адже існує така пара елементів, для якої $\mu_{RR}(x_1, x_2) > \mu_R(x_1, x_2)$. Отже для максимінної композиції $RR$ відношення $R$ не є транзитивним.

Побудуємо матрицю значень функції приналежності $\mu_{R\circ R} (x, y)$ для  мінімаксної композиції $R \circ R$ за формулою:

$$ \mu_{R \circ R} (x, y) = \min_{z \in X} \max \{ \mu_R(x,z); \mu_R(z,y) \} $$

$$ \begin{array}{|c|c|c|c|c|} \hline
R \circ R & x_1 & x_2 & x_3 & x_4 \\ \hline
x_1 & 0.2 & 0.6 & 0.4 & 0.3 \\ \hline
x_2 & 0.5 & 0.2 & 0.2 & 0.4 \\ \hline
x_3 & 0.6 & 0.2 & 0.2 & 0.4 \\ \hline
x_4 & 0.3 & 0.6 & 0.5 & 0.3 \\ \hline
\end{array}$$

Зауважимо, що умова $R \circ R \sube R$ не виконується, адже існує така пара елементів, для якої $\mu_{R \circ R}(x_1, x_2) > \mu_R(x_1, x_2)$. Отже для мінімаксної композиції $R \circ R$ відношення $R$ не є транзитивним.

Побудуємо матрицю значень функції приналежності $\mu_{R* R} (x, y)$ для  максимультиплікативної композиції $R * R$ за формулою:


$$ \begin{array}{|c|c|c|c|c|} \hline
R*R & x_1 & x_2 & x_3 & x_4 \\ \hline
x_1 & 0.81 & 0.36 & 0.18 & 0.36 \\ \hline
x_2 & 0.18 & 0.4 & 0.45 & 0.18 \\ \hline
x_3 & 0.18 & 0.72 & 0.81 & 0.27 \\ \hline
x_4 & 0.54 & 0.54 & 0.45 & 0.27 \\ \hline
\end{array}$$

Зауважимо, що умова $R * R \sube R$ не виконується, адже існує така пара елементів, для якої $\mu_{R * R}(x_1, x_2) > \mu_R(x_1, x_2)$. Отже для мінімаксної композиції $R * R$ відношення $R$ не є транзитивним.

Таким чином, можна зробити висновок, що відношення $R$ не є транзитивним для усіх способів визначення композиції.