## Бойко В.О. група ІС-зп02 

### Варіант:

No задачі: 4
Метод пошуку локальних ваг: EM
Коефіцієнт узгодженості: CR
Метод синтезу: Дистрибутивний

## Завдання:

1) за матрицями парних порівнянь заданим у варіанті методом оцінити локальні ваги критеріїв і локальні ваги альтернатив відносно критеріїв, зробити відповідні висновки;
2) оцінити узгодженість всіх матриць парних порівнянь відповідним методом оцінювання узгодженості; порівняти з пороговим значенням і зробити відповідні висновки;
3) заданим у варіанті методом знайти глобальні ваги альтернатив відносно вершини ієрархії, зробити загальний висновок.



## Задача 4.

Необхідно вибрати один з чотирьох методів діагностування за критеріями «Якість діагностування», «Витрати» і «Ступінь інтегрованості методу».

Матриця парних порівнянь важливості критеріїв:

$$ \begin{array}{|c|c|c|c|} \hline
            & \text{Якість} & \text{Витрати} & \text{Ступінь} \\ 
            & \text{діагностування} & \text{} & \text{інтегрованості методу} \\ \hline
    \text{Якість               }\\
    \text{діагностування       } &    1    &   \frac{1}{3}   &    2    \\  \hline
    \text{Витрати              }\\ 
    \text{                     } &    3    &    1    &    4    \\ \hline
    \text{Ступінь              }\\ 
    \text{інтегрованості методу} &   \frac{1}{2}   &   \frac{1}{4}   &    1    \\ \hline
\end{array}
$$

Порівняння методів за критерієм «Якість діагностування».

$$ \begin{array}{|c|c|c|c|c|} \hline
    & \text{Метод 1} & \text{Метод 2} & \text{Метод 3} & \text{Метод 4} \\ \hline
    \text{Метод 1} &    1    &    2    &   \frac{1}{3}   &     3    \\ \hline
    \text{Метод 2} &   \frac{1}{2}   &    1    &   \frac{1}{5}   &     1    \\ \hline
    \text{Метод 3} &    3    &    5    &    1    &     5    \\ \hline
    \text{Метод 4} &   \frac{1}{3}   &    1    &   \frac{1}{5}   &     1    \\ \hline
\end{array}
$$

Порівняння методів за критерієм «Витрати».

$$ \begin{array}{|c|c|c|c|c|} \hline
            & \text{Метод 1} & \text{Метод 2} & \text{Метод 3} & \text{Метод 4} \\ \hline
    \text{Метод 1} &    1    &   \frac{1}{2}   &    3    &     2    \\ \hline
    \text{Метод 2} &    2    &    1    &    4    &     3    \\ \hline
    \text{Метод 3} &   \frac{1}{3}   &   \frac{1}{4}   &    1    &    \frac{1}{2}   \\ \hline
    \text{Метод 4} &   \frac{1}{2}   &   \frac{1}{3}   &    2    &     1    \\ \hline
\end{array}
$$

Порівняння методів за критерієм «Ступінь інтегрованості методу».

$$ \begin{array}{|c|c|c|c|c|} \hline
            & \text{Метод 1} & \text{Метод 2} & \text{Метод 3} & \text{Метод 4} \\ \hline
    \text{Метод 1} &    1    &    2    &    2    &     1    \\ \hline
    \text{Метод 2} &   \frac{1}{2}   &    1    &    1    &    \frac{1}{2}   \\ \hline
    \text{Метод 3} &   \frac{1}{2}   &    1    &    1    &    \frac{1}{2}   \\ \hline
    \text{Метод 4} &    1    &    2    &    2    &     1    \\ \hline
\end{array}
$$

#### ЕТАП 1. Обчислення локальних ваг (МЕТОД ЕМ)

**Знайдемо локальні ваги критеріїв**


В математичному пакеті WolframAlfa знаходимо власний вектор матриці парних порівнянь, що відповідає максимальному власному числу.

$ \text{Матриця: } \begin{pmatrix}
     &    1      &\frac{1}{3}&    2    \\  
     &    3      &     1     &    4    \\ 
     &\frac{1}{2}&\frac{1}{4}&    1    \\ 
\end{pmatrix}
$

$ \text{власні числа: } (3.01829, -0.00914735 + 0.234809 i, 0.00914735 - 0.234809 i)$

Максимальне власне число – $3.01829$. Йому відповідає власний вектор:

$v = \begin{pmatrix}
     1.74716    \\  
     4.57886    \\ 
     1    \\ 
\end{pmatrix}
$

Сума компонентів власного вектора повинна бути рівною 1, тому нормуємо його (ділимо кожне значення на суму всіх значень):

$ w_1 = \frac{1.74716}{1.74716 + 4.57886 + 1} = 0.23849 $

$ w_2 = \frac{ 4.57886}{1.74716 + 4.57886 + 1} = 0.62501 $

$ w_3 = \frac{1}{1.74716 + 4.57886 + 1} = 0.13650 $

$w = \begin{pmatrix}
    0.23849   \\  
    0.62501    \\ 
    0.13650   \\ 
\end{pmatrix}
$

**Знайдемо локальні ваги альтернатив відносно критерію  «Якість діагностування»**

$\begin{pmatrix}
       1    &    2    &\frac{1}{3}&     3    \\ 
    \frac{1}{2}&    1    &\frac{1}{5}&     1    \\ 
      3    &    5    &    1    &     5    \\ 
   \frac{1}{3}&    1    &\frac{1}{5}&     1   
\end{pmatrix}
$

$ \text{власні числа: } (4.03414, -0.0170685 + 0.370705 i, -0.0170685 - 0.370705 i,0)$

Максимальне власне число – $4.03414$. Йому відповідає власний вектор:

$v = \begin{pmatrix}
    2.34631 \\
     1.09694 \\
     5.77549 \\
     1
\end{pmatrix}
$

Нормуємо власний вектор:

$ w_1 = \frac{ 2.34631}{2.34631 + 1.09694 + 5.77549 + 1} = 0.22961 $

$ w_2 = \frac{ 1.09694}{2.34631 + 1.09694 + 5.77549 + 1} = 0.10735 $

$ w_3 = \frac{ 5.77549}{2.34631 + 1.09694 + 5.77549 + 1} = 0.56519 $

$ w_4 = \frac{1 }{2.34631 + 1.09694 + 5.77549 + 1} = 0.09785 $

$w = \begin{pmatrix}
0.22961 \\
0.10735\\
0.56519\\
0.09785
\end{pmatrix}
$

**Знайдемо локальні ваги альтернатив відносно критерію «Витрати»**


$\begin{pmatrix}
1&\frac{1}{2}&3&2\\
2&1&4&3\\
\frac{1}{3}&\frac{1}{4}&1&\frac{1}{2}\\
\frac{1}{2}&\frac{1}{3}&2&1\\ 
\end{pmatrix}
$

$ \text{власні числа: } (4.03098,-0.00168762 + 0.353268 i,-0.00168762 - 0.353268 i,-0.0276083)$

Максимальне власне число – $4.03098$. Йому відповідає власний вектор:

$v = \begin{pmatrix}
    1.73142 \\
    2.91899 \\
    0.596139 \\
    1
\end{pmatrix}
$

$ w_1 = \frac{ 1.73142 }{ 1.73142 + 2.91899 + 0.596139 + 1 } = 0.27718 $

$ w_2 = \frac{ 1.73142 }{ 1.73142 + 1.73142 + 0.596139 + 1 } = 0.34225 $

$ w_3 = \frac{ 0.596139}{ 1.73142 + 2.91899 + 0.596139 + 1 } = 0.09543 $

$ w_4 = \frac{ 1       }{ 1.73142 + 2.91899 + 0.596139 + 1 } = 0.16009 $

$w = \begin{pmatrix}
    0.27718  \\
    0.34225  \\
    0.09543  \\
    0.16009 
\end{pmatrix}
$

**Знайдемо локальні ваги альтернатив відносно критерію «Ступінь інтегрованості методу»**

$$ \begin{pmatrix} 
     1    &    2    &    2    &     1    \\ 
    \frac{1}{2}   &    1    &    1    &    \frac{1}{2}   \\ 
    \frac{1}{2}   &    1    &    1    &    \frac{1}{2}   \\ 
     1    &    2    &    2    &     1    \\ 
\end{pmatrix}
$$

$ \text{власні числа: } (4,0,0,0)$

Максимальне власне число – $4$. Йому відповідає власний вектор:

$v = \begin{pmatrix}
    1\\
    0.5\\
    0.5 \\
    1
\end{pmatrix}
$

$ w_1 = \frac{ 1 }{ 1+0.5+0.5+1 } = 0.33333 $

$ w_2 = \frac{ 0.5 }{ 1+0.5+0.5+1 } = 0.16667 $

$ w_3 = \frac{ 0.5 }{ 1+0.5+0.5+1 } = 0.16667 $

$ w_4 = \frac{ 1 }{ 1+0.5+0.5+1 } = 0.33333 $

$w = \begin{pmatrix}
    0.33333 \\
    0.16667 \\
    0.16667 \\
    0.33333
\end{pmatrix}
$

Зведемо отримані результати у таблицю:

Ваги альтернатив за критеріями:

$$ \begin{array}{|c|c|c|c|} \hline
            & \text{Якість} & \text{Витрати} & \text{Ступінь} \\ 
            & \text{діагностування} & \text{} & \text{інтегрованості методу} \\ \hline
    \text{Метод 1}            & 0.22961  & 0.27718 & 0.33333 \\  \hline
    \text{Метод 2}            & 0.10735  & 0.34225 & 0.16667 \\ \hline
    \text{Метод 3}            & 0.56519  & 0.09543 & 0.16667 \\ \hline
    \text{Метод 4}            & 0.09785  & 0.16009 & 0.33333 \\ \hline
    \text{Макс. власне число} & 4.03414  & 4.03098 & 4.00000 \\ \hline
    \text{Локальна вага критерію} & 0.23849  & 0.62501 & 0.13650 \\ \hline
\end{array}
$$

**Висновки:** 
критерій "Витрати" найважливіший, менш важливий критерій "Якість діагностування", найменш важливий критерій "Ступінь інтегрованості методу".

За критерієм "Якість діагностування" найкращою альтернативою є "Метод 3". Другою за цим критерієм є альтернатива "Метод 1", альтернативи "Метод 2" та "Метод 4" отримали невисокі, досить близькі значення.

За критерієм "Витрати" найкращою альтернативою є "Метод 2". Далі в порядку спадання оптимальності йдуть альтернативи "Метод 1", "Метод 4" та "Метод 3".

За критерієм "Ступінь інтегрованості методу" однаковими найкращими альтернативами є "Метод 1" та "Метод 4". Альтернативи "Метод 2" та "Метод 3" отримали менш високі, і також однакові значення.

#### ЕТАП 2. Оцінка узгодженості матриць. Коефіцієнт узгодженості: CR

Використовуємо значення максимального власного числа, на основі якого знаходимо індекс узгодженості:

$CI = \frac{\lambda_{max} - n}{n - 1} $

Для критеріїв $\lambda_{max} = 3.01829, n = 3$ 

$CI = \frac{3.01829 - 3}{3 - 1} = 0.009145$

На його основі розраховуємо коефіцієнт узгодженості, поділивши значення $СІ$ на середнє значення індексу узгодженості для випадкових матриць (MRCI). Для $n = 3, MRCI = 0.52$.
В нашому випадку 

$CR = \frac{CI}{MRCI} =\frac{0.009145}{0.52} = 0.01759 $

Значення коефіцієнта узгодженості порівнюємо із пороговим $ 0.01759 < 0.05 $ отже матриця достатньо добре узгоджена.

Розрахуємо коефіцієнт узгодженості матриці парних порівнянь альтернатив за критерієм «Якість діагностування».

$CI = \frac{4.03414 - 4}{4 - 1} = 0.01138$

$CR = \frac{CI}{MRCI} = \frac{0.01138}{0.89} = 0.01279 $

Значення коефіцієнта узгодженості порівнюємо із пороговим $ 0.01279 < 0.08 $ отже матриця достатньо добре узгоджена.

Розрахуємо коефіцієнт узгодженості матриці парних порівнянь альтернатив за критерієм «Витрати».

$CI = \frac{4.03098 - 4}{4 - 1} = 0.01033$

$CR = \frac{CI}{MRCI} = \frac{0.01033}{0.89} = 0.01161 $

Значення коефіцієнта узгодженості порівнюємо із пороговим $ 0.01161 < 0.08 $ отже матриця достатньо добре узгоджена.

Розрахуємо коефіцієнт узгодженості матриці парних порівнянь альтернатив за критерієм «Ступінь інтегрованості методу».

$CI = \frac{4 - 4}{4 - 1} = 0$

$CR = \frac{CI}{MRCI} = \frac{0}{0.89} = 0 $

Значення коефіцієнта узгодженості дорівнює нулю, отже матриця є абсолютно узгодженою.

Зведемо обчислені дані у таблицю.

$$ \begin{array}{|c|c|c|c|c|} \hline
       & \text{МПП} & \text{Якість} & \text{Витрати} & \text{Ступінь} \\ 
       & \text{критеріїв} & \text{діагностування} & \text{} & \text{інтегрованості методу} \\ \hline
    \text{Макс. власне число} & 3.01829 & 4.03414 & 4.03098 & 4  \\  \hline
    \text{$CR$}               & 0.01759 & 0.01279 & 0.01161 & 0  \\ \hline
    \text{Порогове значення}  & 0.05 & 0.08 & 0.08 & 0.08 \\ \hline
    \text{Висновок}           & узгоджена & узгоджена & узгоджена & узгоджена \\ \hline
\end{array}
$$

**Висновок:** матриці парних порівнянь критеріїв, а також порівнянь альтернатив за критеріями «Якість діагностування» і «Витрати» дуже добре узгоджені, отже значенням ваг можна довіряти, вони адекватно відображають відношення між альтернативами, задані МПП. Узгодженість МПП за критерієм «Ступінь інтегрованості методу» абсолютна, це доволі рідко зустрічається на практиці, але це теж можливо, отже значення ваг за критерієм «Ступінь інтегрованості методу» є також адекватними.


#### ЕТАП 3. Оцінка глобальних ваг

Наведемо ваги критеріїв і ваги альтернатив за критеріями, отримані на першому етапі.

$$ \begin{array}{|c|c|c|c|} \hline
            & \text{Якість} & \text{Витрати} & \text{Ступінь} \\ 
            & \text{діагностування} & \text{} & \text{інтегрованості методу} \\ \hline
    \text{Вага критерію} & 0.23849  & 0.62501 & 0.13650 \\ \hline
\end{array}
$$

$$ \begin{array}{|c|c|c|c|} \hline
            & \text{Якість} & \text{Витрати} & \text{Ступінь} \\ 
            & \text{діагностування} & \text{} & \text{інтегрованості методу} \\ \hline
    \text{Метод 1}            & 0.22961  & 0.27718 & 0.33333 \\  \hline
    \text{Метод 2}            & 0.10735  & 0.34225 & 0.16667 \\ \hline
    \text{Метод 3}            & 0.56519  & 0.09543 & 0.16667 \\ \hline
    \text{Метод 4}            & 0.09785  & 0.16009 & 0.33333 \\ \hline
\end{array}
$$

Дистрибутивний синтез

Вагу альтернативи $a_i$ за дистрибутивним синтезом отримуємо як суму добутків ваг цієї альтернативи за $j$-м критерієм на вагу $j$-го критерію.
Для альтернативи 1: $ w_1 = 0.22961 \times 0.23849 + 0.27718 \times 0.62501 + 0.33333 \times 0.13650 = 0.27350 $
Для альтернативи 1: $ w_2 = 0.10735 \times 0.23849 + 0.34225 \times 0.62501 + 0.16667 \times 0.13650 = 0.26226 $
Для альтернативи 1: $ w_3 = 0.56519 \times 0.23849 + 0.09543 \times 0.62501 + 0.16667 \times 0.13650 = 0.21719 $
Для альтернативи 1: $ w_4 = 0.09785 \times 0.23849 + 0.16009 \times 0.62501 + 0.33333 \times 0.13650 = 0.16889 $

В дистрибутивному синтезі ваги вже нормовані, тому це і буде результатом.


$$ \begin{array}{|c|c|c|} \hline
            & \text{Глобальна} & \text{Ранг}  \\ 
            & \text{вага} &  \\ \hline
    \text{Метод 1} & 0.27350 & 1 \\  \hline
    \text{Метод 2} & 0.26226 & 2 \\ \hline
    \text{Метод 3} & 0.21719 & 3 \\ \hline
    \text{Метод 4} & 0.16889 & 4 \\ \hline
\end{array}
$$

**Висновок:** В дистрибутивному методі синтезу Метод 1 отримав найвищу вагу, близьким за вагою але все ж таки трохи гіршим виявився Метод 2. Ще нижчу вагу отримав Метод 3 і найгіршою альтернативою виявився Метод 4.