### Задача 7.5

Нехай деякий молодий чоловік планує поступити у вищий навчальний заклад після закінчення школи. При цьому він розглядає такі можливі варіанти:

- $ x_1$ – Київський державний університет ім.. Т.Г.Шевченка; 
- $ x_2$ – НТУУ “КПІ”;
- $ x_3$ – один із недавно відкритих платний університетів;
- $ x_4$ – Київський національний економічний університет.

Громадянин оцінює альтернативи за такими критеріями: 

- $ R_1$ – престижність ВУЗу; 
- $ R_2$ –гарантоване працевлаштування після закінчення; 
- $ R_3$ – безплатне навчання; 
- $ R_4$ – наявність у ВУЗі сучасної матеріально-технічної бази навчання; 
- $ R_5$ – якість навчання.

Нехай за оцінками експерта згадані критерії встановлюють такі відношення переваги на множині альтернатив:

$ R_1 :  x_1 \approx  x_2 ,  x_1 \succ x_3, x_3 \succ x_4 $

$ R_2: x_1 \succ x_2, x_1 \succ x_3, x_2 \succ x_4, x_3 \approx x_2 $

$R_3: x_1 \approx x_2, x_1 \succ x_4, x_4 \succ x_3 $

$R_4: x_3 \approx x_2, x_2 \succ x_1, x_1 \succ x_4 $

$R_5: x_1 \approx x_2, x_2 \succ x_3, x_3 \succ x_4 $

Нехай ваги критеріїв такі: $ w_1 = 0.3,  w_2 = 0.15,  w_3 = 0.2,  w_4 = 0.15, w_5 = 0.2 $ .

Побудувати згортки критеріїв  $Q_1 = \underset{j}{\prod}  R_j$ і $Q_2 = \underset{j}{\sum} w_j  R_j$ і знайти найкращу альтернативу за обома згортками.

### Розв'язок

Побудуємо матриці відношень:

$$\mu_{R_1} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 1 & 1 & 1\\ \hline
x_2 & 1 & 1 & 1 & 1\\ \hline
x_3 & 0 & 0 & 1 & 1\\ \hline
x_4 & 0 & 0 & 0 & 1\\ \hline
\end{array}$$

$$\mu_{R_2} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 1 & 1 & 1\\ \hline
x_2 & 0 & 1 & 1 & 1\\ \hline
x_3 & 0 & 1 & 1 & 1\\ \hline
x_4 & 0 & 0 & 0 & 1\\ \hline
\end{array}$$

$$\mu_{R_3} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 1 & 1 & 1\\ \hline
x_2 & 1 & 1 & 1 & 1\\ \hline
x_3 & 0 & 0 & 1 & 0\\ \hline
x_4 & 0 & 0 & 1 & 1\\ \hline
\end{array}$$

$$\mu_{R_4} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 0 & 0 & 1\\ \hline
x_2 & 1 & 1 & 1 & 1\\ \hline
x_3 & 1 & 1 & 1 & 1\\ \hline
x_4 & 0 & 0 & 0 & 1\\ \hline
\end{array}$$

$$\mu_{R_5} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 1 & 1 & 1\\ \hline
x_2 & 1 & 1 & 1 & 1\\ \hline
x_3 & 0 & 0 & 1 & 1\\ \hline
x_4 & 0 & 0 & 0 & 1\\ \hline
\end{array}$$

Побудуємо згортку відношень і знайдемо відношення строгої переваги:

$$\mu_{Q_1} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 0 & 0 & 1\\ \hline
x_2 & 0 & 1 & 1 & 1\\ \hline
x_3 & 0 & 0 & 1 & 0\\ \hline
x_4 & 0 & 0 & 0 & 1\\ \hline
\end{array}$$

$$\mu_{Q_1^S} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 0 & 0 & 0 & 1\\ \hline
x_2 & 0 & 0 & 1 & 1\\ \hline
x_3 & 0 & 0 & 0 & 0\\ \hline
x_4 & 0 & 0 & 0 & 0\\ \hline
\end{array}$$

Знаходимо підмножину недомінованих альтернатив по згортці $Q_1$:

$$\mu_{Q_1^\text{нд}} = \begin{array}{|c|c|c|c|} \hline
x_1 & x_2 & x_3 & x_4\\ \hline
1 & 1 & 0 & 0\\ \hline
\end{array}$$

Отже, чітко не домінованими є альтернативи $x_1, x_2$.

Будуємо адитивну згортку відношень

$$\mu_{Q_2} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 1 & 0.85 & 0.85 & 1\\ \hline
x_2 & 0.85 & 1 & 1 & 1\\ \hline
x_3 & 0.15 & 0.3 & 1 & 0.8\\ \hline
x_4 & 0 & 0 & 0.2 & 1\\ \hline
\end{array}$$

$$\mu_{Q_2^S} = \begin{array}{|c|c|c|c|c|} \hline
 & x_1 & x_2 & x_3 & x_4\\ \hline
x_1 & 0 & 0 & 0.7 & 1\\ \hline
x_2 & 0 & 0 & 0.7 & 1\\ \hline
x_3 & 0 & 0 & 0 & 0.6\\ \hline
x_4 & 0 & 0 & 0 & 0\\ \hline
\end{array}$$

Знаходимо множину недомінованих альтернатив по згортці $Q_2$:

$$\mu_{Q_2^\text{нд}} = \begin{array}{|c|c|c|c|} \hline
x_1 & x_2 & x_3 & x_4\\ \hline
1 & 1 & 0.3 & 0\\ \hline
\end{array}$$

Знаходимо перетин множин $Q_1^\text{нд} \cap Q_2^\text{нд}$, та обчислюємо функцію належності результуючої множини $Q^\text{нд}$

$$\mu_{Q^\text{нд}} = \begin{array}{|c|c|c|c|} \hline
x_1 & x_2 & x_3 & x_4\\ \hline
1 & 1 & 0 & 0\\ \hline
\end{array}$$

Таким чином, найкращими альтернативами є $ x_1$ – Київський державний університет ім.. Т.Г.Шевченка та $ x_2$ – НТУУ “КПІ”;