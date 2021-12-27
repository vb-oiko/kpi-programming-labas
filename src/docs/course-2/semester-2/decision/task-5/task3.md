### Задача 3. Варіант 1 

Задано нечіткі множини $A$, $B$ та $C$ з відповідними функціями приналежності, які задано у табличному вигляді:

$$ \begin{array}{|c|c|c|c|c|c|c|c|c|c|c|} \hline
x & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 \\ \hline
\mu_A(x) & 0.1 & 0.4 & 0.4 & 0.3 & 0.2 & 0.2 & 0.4 & 0.9 & 0.9 & 0.7 \\ \hline
\mu_B(x) & 0.9 & 0.7 & 0.8 & 0.8 & 0.3 & 0.6 & 0 & 0.3 & 0.8 & 0.9 \\ \hline
\mu_C(x) & 0.7 & 0.1 & 0.5 & 0.4 & 0.7 & 0.6 & 0 & 0.3 & 0.7 & 0.9 \\ \hline
\end{array}$$

а) знайти функцію приналежності $\mu_{\lambda}(x)$ опуклої комбінації цих множин із вагами: $\lambda_A=0.3$, $\lambda_A=0.3$, $\lambda_A=0.4$

$$ \begin{cases}
1,  & \text{якщо } \lambda_A \mu_A(x)+\lambda_B \mu_B(x)+\lambda_C \mu_C(x) \ge 1\\
\lambda_A \mu_A(x)+\lambda_B \mu_B(x)+\lambda_C \mu_C(x),  & \text{в іншому випадку}
\end{cases}
$$


б) побудувати $(A \widehat{\cup} B \widehat{\cup} C)_\alpha$ та $(A \widehat{\cap} B \widehat{\cap} C)_\alpha$ , де $\alpha=0.4$ та переконатися, що $(A \widehat{\cup} B \widehat{\cup} C)_\alpha \supe A_\alpha \cup B_\alpha \cup C_\alpha$ та $(A \widehat{\cap} B \widehat{\cap} C)_\alpha \sube A_\alpha \cap B_\alpha \cap C_\alpha$.


### Розв'язок

#### Частина 1

$$ \begin{array}{|c|c|c|c|c|c|c|c|c|c|c|} \hline
x & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 \\ \hline
\mu_{\lambda}(x) & 0.58 & 0.37 & 0.56 & 0.49 & 0.43 & 0.48 & 0.12 & 0.48 & 0.79 & 0.84 \\ \hline
\end{array}$$

#### Частина 2

$$ \begin{array}{|c|c|c|c|c|c|c|c|c|c|c|} \hline
x & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 \\ \hline
\mu_{A \widehat{\cap} B \widehat{\cap} C}(x) & 1 & 1 & 1 & 1 & 1 & 1 & 0.4 & 1 & 1 & 1 \\ \hline
\mu_{A \widehat{\cup} B \widehat{\cup} C}(x) & 0.063 & 0.028 & 0.16 & 0.096 & 0.042 & 0.072 & 0 & 0.081 & 0.504 & 0.567 \\ \hline
\end{array}$$


$ A(A \widehat{\cup} B \widehat{\cup} C)_{0.4} = \{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \} $

$ A(A \widehat{\cap} B \widehat{\cap} C)_{0.4} = \{ 9, 10 \} $


$ A_{0.4} = \{ 2, 3, 7, 8, 9, 10 \} $

$ B_{0.4} = \{ 1, 2, 3, 4, 6, 9, 10  \} $

$ C_{0.4} = \{ 1, 3, 4, 5, 6, 9, 10  \} $

$ A_{0.4} \cup B_{0.4} \cup C_{0.4} = \{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \}  $

$ A_{0.4} \cap B_{0.4} \cap C_{0.4} = \{ 3, 9, 10 \}  $

$  \{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \} \supe  \{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \} $

$  \{ 9, 10 \} \sube \{ 3, 9, 10 \} $
