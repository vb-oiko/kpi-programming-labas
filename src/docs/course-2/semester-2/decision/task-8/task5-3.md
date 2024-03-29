### Задача 2
Одним з найсправедливіших механізмів розподілу грошей/майна є N-ядро.
$C = 20000, b_1 = 4000, b_2 = 6000, b_3 = 18000$

$$ \frac{1}{2} \sum b_i = \frac{1}{2} (4000+6000+18000) = 14000 $$ 

Оскільки $c = 20000 > \frac{1}{2} \sum b_i = 14000$, то:

$$ \lambda_0 = \frac{1}{n} \left( \sum_{i=1}^n b_i - c \right) = \frac{4000+6000+18000-20000}{3} = 2666 \frac{2}{3}  $$

Оскільки $ \lambda_0 > \frac{b_1}{2} $, то переходимо до наступного кроку:


$$ x_1 = \frac{b_1}{2} = 2000 $$

$$ \lambda_1 = \frac{1}{n-1} \left( \sum_{i=2}^n b_i - c +x_1\right) = \frac{6000+18000-20000+2000}{2} = 3000 $$

Оскільки $ \lambda_1 = \frac{b_2}{2} $, то:

$$ \lambda^* = \lambda_1 = 3000 $$

$$ x_2 = 6000 - 3000 = 3000 $$

$$ x_3 = 18000 - 3000 = 15000 $$



Зведемо отримані значення у таблицю для наочності.

$$ \begin{array}{|l|c|c|c|c|} \hline
    C=20000                     & b_1= 4000 & b_2= 6000 & b_3= 18000 & 28000 \\ \hline
    \text{Вид податку}          & x_1       & x_2       & x_3        &       \\ \hline
    \text{N-ядро}               & 2000      & 3000      & 15000       & 20000 \\ \hline
\end{array}$$