### Задача 1. Варіант 1 

Задано нечіткі множини $A$ та $B$ з функціями приналежності $\mu_A(x)$ та $\mu_B(x)$ :

$$ \begin{array}{|c|c|c|c|c|c|c|c|c|c|c|c|c|} \hline
x & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 & 11 & 12 \\ \hline
\mu_A(x) & 1 & 0 & 1 & 0.8 & 0.8 & 0.5 & 0.6 & 1 & 0.4 & 0.1 & 0 & 0.5 \\ \hline
\mu_B(x) & 0.5 & 0.4 & 0 & 1 & 0.3 & 0.6 & 0.8 & 0 & 0.5 & 1 & 0 & 0.8 \\ \hline
\end{array}$$

Побудувати функції приналежності для наступних нечітких множин:

а) $ A \cup B $ 

б) $ A \cap B $

в) $ \overline{A} $

г) $ \overline{B} $

ґ) $ A \backslash B $

е) $ A \widehat{\cup} B $

ж) $ A \widehat{\cap} B $

з) $ A \backslash (B \cap \overline{A}) $



### Розв'язок

$$ \begin{array}{|c|c|c|c|c|c|c|c|c|c|c|c|c|} \hline
x & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 & 11 & 12 \\ \hline
\mu_{A \cup B}(x) & 1 & 0.4 & 1 & 1 & 0.8 & 0.6 & 0.8 & 1 & 0.5 & 1 & 0 & 0.8 \\ \hline
\mu_{A \cap B}(x) & 0.5 & 0 & 0 & 0.8 & 0.3 & 0.5 & 0.6 & 0 & 0.4 & 0.1 & 0 & 0.5 \\ \hline
\mu_{\overline{A}}(x) & 0 & 1 & 0 & 0.2 & 0.2 & 0.5 & 0.4 & 0 & 0.6 & 0.9 & 1 & 0.5 \\ \hline
\mu_{\overline{B}}(x) & 0.5 & 0.6 & 1 & 0 & 0.7 & 0.4 & 0.2 & 1 & 0.5 & 0 & 1 & 0.2 \\ \hline
\mu_{A \backslash B}(x) & 0.5 & 0 & 1 & 0 & 0.5 & 0 & 0 & 1 & 0 & 0 & 0 & 0 \\ \hline
\mu_{A \widehat{\cup} B}(x) & 1 & 0.4 & 1 & 1 & 1 & 1 & 1 & 1 & 0.9 & 1 & 0 & 1 \\ \hline
\mu_{A \widehat{\cap} B}(x) & 0.5 & 0 & 0 & 0.8 & 0.24 & 0.3 & 0.48 & 0 & 0.2 & 0.1 & 0 & 0.4 \\ \hline
\mu_{A \backslash (B \cap \overline{A})}(x) & 1 & 0 & 1 & 0.6 & 0.6 & 0 & 0.2 & 1 & 0 & 0 & 0 & 0 \\ \hline
\end{array}$$