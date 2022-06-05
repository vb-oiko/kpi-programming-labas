### $C=90$


#### а) Подушний податок.

$$ \lambda_0 = \frac{c}{n} = \frac{90}{6} = 15 $$

Оскільки $\lambda_0 > b_1$, то переходимо до наступного кроку

$$ x_1 = b_1 = 10 $$

$$ \lambda_1 = \frac{1}{n-1} (c - x_1) = \frac{90 - 10}{6 -1} = \frac{80}{5} = 16 $$

Оскільки $\lambda_1 > b_2$, то переходимо до наступного кроку

$$ x_2 = b_2 = 12 $$

$$ \lambda_2 = \frac{1}{n-2} (c - x_1 - x_2) = \frac{90 - 10 - 12}{6 - 2} = \frac{68}{5} = 17 $$

Оскільки $\lambda_2 < b_3$, то маємо:

$$ \lambda^* = \lambda_2 =  17  $$

$$ x_3 = x_4 = x_5 = x_6= \lambda^* = 17 $$


#### б) Рівневий податок.

$$ \lambda_0 = \frac{1}{n} \left(\sum_{i=1}^n b_i - c \right) = \frac{10+12+18+20+30+36-90}{5} = 6 $$

Оскільки $\lambda_0 < b_1$, то то маємо:

$$ \lambda^* = \lambda_0 = 6, x_i = b_i - \lambda^* $$ 

Отже:

$$ x_1 = 10 - 6 = 4 $$ 

$$ x_2 = 12 - 6 = 6 $$ 

$$ x_3 = 18 - 6 = 12 $$ 

$$ x_4 = 20 - 6 = 14 $$ 

$$ x_5 = 30 - 6 = 24 $$ 

$$ x_6 = 36 - 6 = 30 $$ 

#### в) Пропорційний податок.

$$ x_1 = \frac{90 \cdot 10 }{10+12+18+20+30+36} = \frac{900}{126} \approx 7.143 $$ 

$$ x_2 = \frac{90 \cdot 12}{10+12+18+20+30+36} = \frac{1080}{126} \approx 8.571 $$ 

$$ x_3 = \frac{90 \cdot 18}{10+12+18+20+30+36} = \frac{1620}{126} \approx 12.857 $$ 

$$ x_4 = \frac{90 \cdot 20}{10+12+18+20+30+36} = \frac{1800}{126} \approx 14.286 $$ 

$$ x_5 = \frac{90 \cdot 30}{10+12+18+20+30+36} = \frac{2700}{126} \approx 21.429 $$ 

$$ x_6 = \frac{90 \cdot 36}{10+12+18+20+30+36} = \frac{3240}{126} \approx 25.714 $$ 

#### г) N-ядро.

$$ \frac{1}{2} \sum b_i = \frac{1}{2} (10+12+18+20+30+36) = 63 $$ 

Оскільки $c = 90 > \frac{1}{2} \sum b_i = 63$, то:

$$ \lambda_0 = \frac{1}{n} \left( \sum_{i=1}^n b_i - c \right) = \frac{10+12+18+20+30+36-90}{6} = 6 $$

Оскільки $\lambda_0 > \frac{b_1}{2}$, то переходимо до наступного кроку

$$ x_1 = \frac{b_1}{2} = 5$$

$$ \lambda_1 = \frac{1}{n-1} \left( \sum_{i=2}^n b_i - c \right) = \frac{12+18+20+30+36-90}{6-1} = 6.2 $$

Оскільки $\lambda_1 > \frac{b_2}{2}$, то переходимо до наступного кроку

$$ x_2 = \frac{b_2}{2} = 6$$

$$ \lambda_1 = \frac{1}{n-2} \left( \sum_{i=3}^n b_i - c \right) = \frac{18+20+30+36-90}{6-2} = 6.25 $$

Оскільки $\lambda_2 < \frac{b_3}{2}$, то

$$ \lambda^* = \lambda_2 =  6.25 $$

$$ x_1 = 5 $$

$$ x_2 = 6 $$

$$ x_3 = b_3 - \lambda^* = 18 -  6.25 = 11.75 $$

$$ x_4 = b_4 - \lambda^* = 20 -  6.25 = 13.75 $$

$$ x_5 = b_5 - \lambda^* = 30 -  6.25 = 23.75 $$

$$ x_6 = b_6 - \lambda^* = 36 -  6.25 = 29.75 $$

Зведемо отримані значення у таблицю для наочності.

$$ \begin{array}{|l|c|c|c|c|c|c|c|} \hline
    C=90                       & b_1=10& b_2=12& b_3=18& b_4=20& b_5=30& b_6=36& 96 \\ \hline
    \text{Вид податку}          & x_1    & x_2    & x_3    & x_4    & x_5    & x_5    &    \\ \hline
    \text{Подушний податок}     & 10     & 12     & 17     & 17     & 17     & 17     & 90\\ \hline
    \text{Рівневий податок}     & 4      & 6      & 12     & 14     & 24     & 30     & 90\\ \hline
    \text{Пропорційний податок} & 7.143  & 8.571  & 12.857 & 14.286 & 21.429 & 25.714 & 90\\ \hline
    \text{N-ядро}               & 5      & 6      & 11.75  & 13.75  & 23.75  & 29.75  & 90\\ \hline
\end{array}$$

 
 