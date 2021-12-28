### Задача 9. Варіант 1 

Задано нечітке відношення $R$ з функцією належності виду:

$$ \begin{array}{|c|c|c|c|} \hline
R & x_1 & x_2 & x_3 \\ \hline
x_1 & 0 & 0.6 & 0.2 \\ \hline
x_2 & 0.9 & 0.9 & 0.6 \\ \hline
x_3 & 0.2 & 0.6 & 0.6 \\ \hline
\end{array}$$

Побудувати $R_1^2, R_2^2, R_3^2$ і перевірити, чи виконується $R_3^2 \sube R_2^2 \sube R_1^2$

### Розв'язок


1. Побудуємо відношення $R_1^2$, де:

$$ \mu_{R_1^2}(x,z) = \max_{y \in X} \min (\mu_A(x,y), \mu_B(x,z)) $$

$$ \begin{array}{|c|c|c|c|} \hline
R_1^2 & x_1 & x_2 & x_3 \\ \hline
x_1 & 0.6 & 0.6 & 0.6 \\ \hline
x_2 & 0.9 & 0.9 & 0.6 \\ \hline
x_3 & 0.6 & 0.6 & 0.6 \\ \hline
\end{array}$$


2. Побудуємо відношення $R_2^2$, де:

$$ \mu_{R_2^2}(x,z) = \min_{y \in X} \max (\mu_A(x,y), \mu_B(x,z)) $$

$$ \begin{array}{|c|c|c|c|} \hline
R_2^2 & x_1 & x_2 & x_3 \\ \hline
x_1 & 0 & 0.6 & 0.2 \\ \hline
x_2 & 0.6 & 0.6 & 0.6 \\ \hline
x_3 & 0.2 & 0.6 & 0.2 \\ \hline
\end{array}$$

Як можна побачити, 

$$ \forall x_i \in X, i=1..3, 
   \forall x_j \in X, j=1..3 \quad 
   \mu_{R_2^2}(x_i,x_j) \le \mu_{R_1^2}(x_i,x_j) $$

Отже, можемо стверджувати, що $R_2^2 \sube R_1^2$







3. Побудуємо відношення $R_3^2$, де:

$$ \mu_{R_3^2}(x,z) = \max_{y \in X} \{ (\mu_A(x,y) \cdot \mu_B(x,z) \} $$

$$ \begin{array}{|c|c|c|c|} \hline
R_3^2 & x_1 & x_2 & x_3 \\ \hline
x_1 & 0.54 & 0.54 & 0.36 \\ \hline
x_2 & 0.81 & 0.81 & 0.54 \\ \hline
x_3 & 0.54 & 0.54 & 0.36 \\ \hline
\end{array}$$


Як можна побачити $\mu_{R_3^2}(x_1,x_1) > \mu_{R_2^2}(x_1,x_1)$, а це означає, що

$$ \forall x_i \in X, i=1..3, 
   \forall x_j \in X, j=1..3 \quad 
   \mu_{R_3^2}(x_i,x_j) \nleq \mu_{R_2^2}(x_i,x_j) $$

Отже, можемо стверджувати, що $R_3^2 \nsubseteq R_2^2$

Таким чином виконується наступне твердження: $R_3^2 \nsubseteq R_2^2 \sube R_1^2$







