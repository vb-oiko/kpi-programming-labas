### Задача 8. Варіант 1 

Для нечітких відносин $A$ і $B$, функції належності яких мають вигляд:
$$ \begin{array}{|c|c|c|c|c|c|} \hline
А & y_1 & y_2 & y_3 & y_4 & y_5 \\ \hline
x_1 & 0.3 & 0.8 & 0.6 & 0.9 & 0.4 \\ \hline
x_2 & 0 & 0.6 & 0.2 & 0.2 & 0.4 \\ \hline
x_3 & 0.4 & 0.2 & 0.1 & 0.2 & 0.8 \\ \hline
\end{array}$$

$$ \begin{array}{|c|c|c|c|c|} \hline
B & z_1 & z_2 & z_3 & z_4 \\ \hline
y_1 & 0.8 & 0.5 & 0.9 & 0 \\ \hline
y_2 & 0.7 & 0.9 & 0.9 & 0.2 \\ \hline
y_3 & 0 & 0.6 & 0.6 & 0.2 \\ \hline
y_4 & 0.9 & 0.7 & 0.8 & 0.6 \\ \hline
y_5 & 0.7 & 0 & 0.7 & 0 \\ \hline
\end{array}$$

Побудувати $R_1^2, R_2^2, R_3^2$, де відповідно:

$$ \mu_{R_1^2}(x,z) = \max_{y \in Y} \min (\mu_A(x,y), \mu_B(x,y)) $$

$$ \mu_{R_2^2}(x,z) = \min_{y \in Y} \max (\mu_A(x,y), \mu_B(x,y)) $$

$$ \mu_{R_3^2}(x,z) = \max_{y \in Y} \{ (\mu_A(x,y) \cdot \mu_B(x,y) \} $$


### Розв'язок

$$ \begin{array}{|c|c|c|c|c|} \hline
R_1^2 & z_1 & z_2 & z_3 & z_4 \\ \hline
x_1 & 0.9 & 0.8 & 0.8 & 0.6 \\ \hline
x_2 & 0.6 & 0.6 & 0.6 & 0.2 \\ \hline
x_3 & 0.7 & 0.4 & 0.7 & 0.2 \\ \hline
\end{array}$$

$$ \begin{array}{|c|c|c|c|c|} \hline
R_2^2 & z_1 & z_2 & z_3 & z_4 \\ \hline
x_1 & 0.6 & 0.4 & 0.6 & 0.3 \\ \hline
x_2 & 0.2 & 0.4 & 0.6 & 0 \\ \hline
x_3 & 0.1 & 0.5 & 0.6 & 0.2 \\ \hline
\end{array}$$

$$ \begin{array}{|c|c|c|c|c|} \hline
R_3^2 & z_1 & z_2 & z_3 & z_4 \\ \hline
x_1 & 0.81 & 0.72 & 0.72 & 0.54 \\ \hline
x_2 & 0.42 & 0.54 & 0.54 & 0.12 \\ \hline
x_3 & 0.56 & 0.2 & 0.56 & 0.12 \\ \hline
\end{array}$$