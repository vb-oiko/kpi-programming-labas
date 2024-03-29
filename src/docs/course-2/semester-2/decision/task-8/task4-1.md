# Задача 8.4



1. Нехай є п’ять учасників спільної діяльності $n = 5$. Припустимо, що доходи учасників дорівнюють відповідно: $b_1= 8, b_2 = 12, b_3 = 20, b_4 = 24, b_5 = 32$, а загальні витрати на проект складають:

а) $C = 36$ одиниць;
б) $C = 70$ одиниць.

Необхідно знайти розподілення витрат учасників у відповідності із:

а) подушним податком;
б) рівневим податком;
в) пропорційним податком;
г) N-ядром.

1. Нехай є фірма, яка збанкрутувала. Її залишкове майно складає $16000$ грн., а борги кредиторам складають відповідно $4000$, $600$, $10000$ грн. Знайти справедливе розподілення майна фірми між кредиторами.

## Розв'язок

### $C=36$


#### а) Подушний податок.

$$ \lambda_0 = \frac{c}{n} = \frac{36}{5} = 7.2 $$

Оскільки $\lambda_0 < b_1$, то  маємо:

$$ \lambda^* = \lambda_0 = 7.2 $$

$$ x_1 = x_2 = x_3 = x_4 = x_5 = \lambda^* = 7.2 $$


#### б) Рівневий податок.

$$ \lambda_0 = \frac{1}{n} \left(\sum_{i=1}^n b_i - c \right) = \frac{8+12+20+24+32-36}{5} = 12 $$

Оскільки $\lambda_0 > b_1$, то $x_1 = 0$ і переходимо до наступного кроку

$$ \lambda_1 = \frac{1}{n-1} \left(\sum_{i=2}^n b_i - c \right) = \frac{12+20+24+32-36}{4} = 13 $$

Оскільки $\lambda_1 > b_2$, то $x_2 = 0$ і переходимо до наступного кроку

$$ \lambda_2 = \frac{1}{n-2} \left(\sum_{i=3}^n b_i - c \right) = \frac{20+24+32-36}{3} = 13\frac{1}{3} \approx 13.333 $$

Оскільки $\lambda_2 < b_3$, то маємо:

$$ \lambda^* = \lambda_2 = 13\frac{1}{3} \approx 13.333 $$ 

$$ x_i = b_i - \lambda^* $$ 

Отже:

$$ x_1 = 0 $$ 

$$ x_2 = 0 $$ 

$$ x_3 = 20 - 13.333 = 6.667 $$ 

$$ x_4 = 24 - 13.333 = 10.667 $$ 

$$ x_5 = 32 - 13.333 = 18.667 $$ 

#### в) Пропорційний податок.

$$ x_i = c \frac{b_i}{\sum b_i} $$ 

$$ x_1 = \frac{36 \cdot 8 }{8+12+20+24+32} = \frac{288}{96} = 3 $$ 

$$ x_2 = \frac{36 \cdot 12}{8+12+20+24+32} = \frac{432}{96} = 4.5 $$ 

$$ x_3 = \frac{36 \cdot 20}{8+12+20+24+32} = \frac{720}{96} = 7.5 $$ 

$$ x_4 = \frac{36 \cdot 24}{8+12+20+24+32} = \frac{864}{96} = 9 $$ 

$$ x_5 = \frac{36 \cdot 32}{8+12+20+24+32} = \frac{1152}{96} = 12 $$ 

#### г) N-ядро.

$$ \frac{1}{2} \sum b_i = \frac{1}{2} (8+12+20+24+32) = 48 $$ 

Оскільки $c = 36 < \frac{1}{2} \sum b_i = 48$, то:

$$ \lambda_0 = \frac{c}{n} = \frac{36}{5} = 7.2 $$

Оскільки $\lambda_0 > \frac{b_1}{2}$, то переходимо до наступного кроку

$$ x_1 = \frac{b_1}{2} = 4$$

$$ \lambda_1 = \frac{1}{n-1} (c - x_1) = \frac{36 - 4}{5 - 1} = \frac{32}{4} = 8 $$

Оскільки $\lambda_1 > \frac{b_2}{2}$, то переходимо до наступного кроку

$$ x_2 = \frac{b_2}{2} = 6$$

$$ \lambda_2 = \frac{1}{n-2} (c - x_1 - x_2) = \frac{36 - 4 - 6}{5 - 2} = \frac{26}{3} = 8 \frac{2}{3} $$

Оскільки $\lambda_2 < \frac{b_3}{2}$, то

$$ x_1 = 6 $$

$$ x_2 = 6 $$

$$ \lambda^* = \lambda_2 = 8 \frac{2}{3}  $$

$$ x_3 = x_4 = x_5 = \lambda^* = 8 \frac{2}{3} \approx 8.667 $$

Зведемо отримані значення у таблицю для наочності.

$$ \begin{array}{|l|c|c|c|c|c|c|} \hline
    C=36                        & b_1= 8 & b_2=12 & b_3= 20 & b_4= 24 & b_5= 32 & 96 \\ \hline
    \text{Вид податку}          & x_1    & x_2    & x_3     & x_4     & x_5     &    \\ \hline
    \text{Подушний податок}     & 7.2    & 7.2    & 7.2     & 7.2     & 7.2     & 36 \\ \hline
    \text{Рівневий податок}     & 0      & 0      & 6.667   & 10.667  & 18.667  & 36 \\ \hline
    \text{Пропорційний податок} & 3      & 4.5    & 7.5     & 9       & 12      & 36 \\ \hline
    \text{N-ядро}               & 4      & 6      & 8.667   & 8.667   & 8.667   & 36 \\ \hline
\end{array}$$