### $C=50$


#### а) Подушний податок.

$$ \lambda_0 = \frac{c}{n} = \frac{50}{5} = 10 $$

Оскільки $\lambda_0 > b_1$, то переходимо до наступного кроку

$$ x_1 = b_1 = 4 $$

$$ \lambda_1 = \frac{1}{n-1} (c - x_1) = \frac{50 - 4}{5 -1} = \frac{46}{4} = 11.5 $$

Оскільки $\lambda_1 > b_2$, то переходимо до наступного кроку

$$ x_2 = b_2 = 8 $$

$$ \lambda_2 = \frac{1}{n-2} (c - x_1 - x_2) = \frac{50 - 4 - 8}{5 - 2} = \frac{38}{3} = 12 \frac{2}{3} \approx12.667 $$

Оскільки $\lambda_2 > b_3$, то переходимо до наступного кроку

$$ x_3 = b_3 = 12 $$

$$ \lambda_3 = \frac{1}{n-3} (c - x_1 - x_2 - x_3) = \frac{50 - 4 - 8 - 12}{5 - 3} = \frac{26}{2} = 13 $$

Оскільки $\lambda_3 < b_4$, то маємо:

$$ \lambda^* = \lambda_3 = 13 $$

$$ x_4 = x_5 = \lambda^* = 13 $$


#### б) Рівневий податок.

$$ \lambda_0 = \frac{1}{n} \left(\sum_{i=1}^n b_i - c \right) = \frac{4+8+12+20+26-50}{5} = 4 $$

Оскільки $\lambda_0 = b_1$, то то маємо:

$$ \lambda^* = \lambda_0 = 4, x_i = b_i - \lambda^* $$ 

Отже:

$$ x_1 = 4 - 4 = 0 $$ 

$$ x_2 = 8 - 4 = 4 $$ 

$$ x_3 = 12 - 4 = 8 $$ 

$$ x_4 = 20 - 4 = 16 $$ 

$$ x_5 = 26 - 4 = 22 $$ 

#### в) Пропорційний податок.

$$ x_i = c \frac{b_i}{\sum b_i} $$ 

$$ x_1 = \frac{50 \cdot 4}{4+8+12+20+26} = \frac{200}{70} \approx 2.857 $$ 

$$ x_2 = \frac{50 \cdot 8}{4+8+12+20+26} = \frac{400}{70} \approx 5.714 $$ 

$$ x_3 = \frac{50 \cdot 12}{4+8+12+20+26} = \frac{600}{70} \approx 8.571 $$ 

$$ x_4 = \frac{50 \cdot 20}{4+8+12+20+26} = \frac{1000}{70} \approx 14.286 $$ 

$$ x_5 = \frac{50 \cdot 26}{4+8+12+20+26} = \frac{1300}{70} \approx 18.571 $$ 

#### г) N-ядро.

$$ \frac{1}{2} \sum b_i = \frac{1}{2} (4+8+12+20+26 - 50) = 35 $$ 

Оскільки $c = 50 > \frac{1}{2} \sum b_i = 35$, то:

$$ \lambda_0 = \frac{1}{n} \left( \sum_{i=1}^n b_i - c \right) = \frac{4+8+12+20+26-50}{5} = 4  $$

Оскільки $\lambda_0 > \frac{b_1}{2}$, то переходимо до наступного кроку

$$ x_1 = \frac{b_1}{2} = 2$$

$$ \lambda_1 = \frac{1}{n-1} \left( \sum_{i=2}^n b_i - c + x_1 \right) = \frac{8+12+20+26-50+2}{5 - 1} = \frac{18}{4} = 4.5 $$

Оскільки $\lambda_1 > \frac{b_2}{2}$, то переходимо до наступного кроку

$$ x_2 = \frac{b_2}{2} = 4$$

$$ \lambda_2 = \frac{1}{n-2} \left( \sum_{i=3}^n b_i - c + x_1 + x_2 \right) = \frac{12+20+26-50+2+4}{5 - 2} = \frac{14}{3} = 4 \frac{2}{3} \approx 4.667 $$

Оскільки $\lambda_2 < \frac{b_3}{2}$, то

$$ x_1 = 2 $$

$$ x_2 = 4 $$

$$ \lambda^* = \lambda_2 =  4 \frac{2}{3} $$

$$ x_3 = b_3 - \lambda^* = 12 -  4 \frac{2}{3} = 7 \frac{1}{3} \approx 7.333 $$

$$ x_4 = b_4 - \lambda^* = 20 -  4 \frac{2}{3} = 15 \frac{1}{3} \approx 15.333 $$

$$ x_5 = b_5 - \lambda^* = 26 -  4 \frac{2}{3} = 21 \frac{1}{3} \approx 21.333 $$

Зведемо отримані значення у таблицю для наочності.

$$ \begin{array}{|l|c|c|c|c|c|c|} \hline
    C=50                        & b_1= 4 & b_2= 8 & b_3= 12 & b_4= 20 & b_5= 26 & 70 \\ \hline
    \text{Вид податку}          & x_1    & x_2    & x_3   & x_4     & x_5     &    \\ \hline
    \text{Подушний податок}     & 4      & 8      & 12    & 13      & 13      & 50 \\ \hline
    \text{Рівневий податок}     & 0      & 4      & 8     & 16      & 22      & 50 \\ \hline
    \text{Пропорційний податок} & 2.857  & 5.714  & 8.571 & 14.286  & 18.571  & 50 \\ \hline
    \text{N-ядро}               & 2      & 4      & 7.333 & 15.333  & 21.333  & 50 \\ \hline
\end{array}$$