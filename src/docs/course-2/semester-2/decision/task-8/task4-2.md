### $C=\cb$


#### а) Подушний податок.

$$ \lambda_0 = \frac{c}{n} = \frac{\cb}{5} = 14 $$

Оскільки $\lambda_0 > b_1$, то переходимо до наступного кроку

$$ x_1 = b_1 = \ba $$

$$ \lambda_1 = \frac{1}{n-1} (c - x_1) = \frac{\cb - \ba}{5 -1} = \frac{62}{4} = 15.5 $$

Оскільки $\lambda_1 > b_2$, то переходимо до наступного кроку

$$ x_2 = b_2 = \bb $$

$$ \lambda_2 = \frac{1}{n-2} (c - x_1 - x_2) = \frac{\cb - \ba - \bb}{5 - 2} = \frac{50}{3} = 16 \frac{2}{3} \approx 16.667 $$

Оскільки $\lambda_2 < b_3$, то маємо:

$$ \lambda^* = \lambda_2 =  16 \frac{2}{3}  $$

$$ x_3 = x_4 = x_5 = \lambda^* = 16 \frac{2}{3} \approx 16.667$$


#### б) Рівневий податок.

$$ \lambda_0 = \frac{1}{n} \left(\sum_{i=1}^n b_i - c \right) = \frac{\ba+\bb+\bc+\bd+\be-\cb}{5} = 5.2 $$

Оскільки $\lambda_0 < b_1$, то то маємо:

$$ \lambda^* = \lambda_0 = 5.2, x_i = b_i - \lambda^* $$ 

Отже:

$$ x_1 = \ba - 5.2 = 2.8 $$ 

$$ x_2 = \bb - 5.2 = 6.8 $$ 

$$ x_3 = \bc - 5.2 = 14.8 $$ 

$$ x_4 = \bd - 5.2 = 18.8 $$ 

$$ x_5 = \be - 5.2 = 26.8 $$ 

#### в) Пропорційний податок.

$$ x_1 = \frac{\cb \cdot \ba }{\ba+\bb+\bc+\bd+\be} = \frac{560}{96} \approx 5.833 $$ 

$$ x_2 = \frac{\cb \cdot \bb}{\ba+\bb+\bc+\bd+\be} = \frac{840}{96} = 8.75 $$ 

$$ x_3 = \frac{\cb \cdot \bc}{\ba+\bb+\bc+\bd+\be} = \frac{1400}{96} \approx 14.583 $$ 

$$ x_4 = \frac{\cb \cdot \bd}{\ba+\bb+\bc+\bd+\be} = \frac{1680}{96} = 17.5 $$ 

$$ x_5 = \frac{\cb \cdot \be}{\ba+\bb+\bc+\bd+\be} = \frac{2240}{96} \approx 23.333 $$ 

#### г) N-ядро.

$$ \frac{1}{2} \sum b_i = \frac{1}{2} (\ba+\bb+\bc+\bd+\be) = 48 $$ 

Оскільки $c = \cb > \frac{1}{2} \sum b_i = 48$, то:

$$ \lambda_0 = \frac{1}{n} \left( \sum_{i=1}^n b_i - c \right) = \frac{\ba+\bb+\bc+\bd+\be-\cb}{5} = 5.2 $$

Оскільки $\lambda_0 > \frac{b_1}{2}$, то переходимо до наступного кроку

$$ x_1 = \frac{b_1}{2} = 4$$

$$ \lambda_1 = \frac{1}{n-1} \left( \sum_{i=2}^n b_i - c \right) = \frac{\bb+\bc+\bd+\be-\cb}{4} = 5.5 $$

Оскільки $\lambda_1 < \frac{b_2}{2}$, то

$$ \lambda^* = \lambda_0 =  5.5 $$

$$ x_1 = 4 $$

$$ x_2 = b_2 - \lambda^* = \bb -  5.5 = 6.5 $$

$$ x_3 = b_3 - \lambda^* = \bc -  5.5 = 14.5 $$

$$ x_4 = b_4 - \lambda^* = \bd -  5.5 = 18.5 $$

$$ x_5 = b_5 - \lambda^* = \be -  5.5 = 26.5 $$

Зведемо отримані значення у таблицю для наочності.

$$ \begin{array}{|l|c|c|c|c|c|c|} \hline
    C=\cb                       & b_1=\ba& b_2=\bb& b_3=\bc& b_4=\bd& b_5=\be& 96 \\ \hline
    \text{Вид податку}          & x_1    & x_2    & x_3    & x_4    & x_5    &    \\ \hline
    \text{Подушний податок}     & 8      & 12     & 16.667 & 16.667 & 16.667 & \cb\\ \hline
    \text{Рівневий податок}     & 2.8    & 6.8    & 14.8   & 18.8   & 26.8   & \cb\\ \hline
    \text{Пропорційний податок} & 5.833  & 8.75   & 14.583 & 17.5   & 23.333 & \cb\\ \hline
    \text{N-ядро}               & 4      & 6.5    & 14.5   & 18.5   & 26.5   & \cb\\ \hline
\end{array}$$