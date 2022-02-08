### Тема 1. Варіант 2.

#### Завдання про розподіл виробничої програми між підприємствами

Один із видів кінцевої продукції, що випускається галуззю, комплектується з трьох видів виробів, які можна виготовляти на різних підприємствах. Кількість виробів кожного виду, що входить в комплект готової продукції, задано. Крім того, відома місячна продуктивність кожного підприємства з випуску виробів кожного виду. Потрібно оптимально розподілити випуск виробів по підприємствах, тобто визначити спеціалізацію підприємств з тим, щоб забезпечити максимальний випуск комплектної продукції [1;3;5].

У табл.1. представлені вихідні дані. Продуктивність підприємства задана у тисячах тонн.

$$ \begin{array}{|c|c|c|c|c|c|c|}  \hline
  \text{Номер}&\text{Тип 1}&\text{Тип 2}&\text{Тип 3}&\text{Тип 4}&\text{Тип 5}&\text{Кількість} \\ 
  \text{виробу}&&&&&&\text{виробів у} \\
  &&&&&&\text{комплекті} \\ \hline
  1 & 200 & 100 & 300 & 50  & 20  & 1 \\ \hline
  2 & 70  & 100 & 300 & 100 & 400 & 4 \\ \hline
  3 & 60  & 150 & 100 & 300 & 500 & 2 \\ \hline
  \text{Кількість} \\ 
  \text{підприємств} & 10 & 4 & 60 & 7 & 5 \\ \hline
\end{array}
$$




Припустимо, що місячна продуктивність кожного підприємства є нечіткою випадковою величиною з функцією приналежності

$$ \mu_{ij}(a_{ij}) = \frac{1}{1 + \frac{(a_{ij} - \overline{a}_{ij})^2}{\overline{a}_{ij}^2}},
$$

де $a_{ij}$ - це дані, наведені в таблиці 1, $i$ - номер виробу; $j$ - тип підприємства, $j=\overline{1,5}$. Побудувати відповідну модель задачі НМП. Знайти підмножини максимізуючих альтернатив, недомінованих, зі ступенем $\alpha=0.8$, зокрема для стратегій оптиміста та песиміста, та порівняти отримані рішення.

#### Математична модель

Позначимо через $x_{ij}$ - кількість підприємстві $j$-го типу, на яких буде вироблятися виріб $i$-го типу, через $b_{j}$ - кількість підприємств $j$-го типу, а через $p_i$ - кількість виробів $i$-го типу у комплекті. Тоді математична модель матиме такий вигляд:

$$ \max \sum_{i=1}^{3} \sum_{j=1}^{5} a_{ij} x_{ij} $$

При обмеженнях

$$ \frac{1}{p_i} \sum_{j=1}^{5} a_{ij} x_{ij} = \frac{1}{p_k} \sum_{j=1}^{5} a_{kj} x_{kj}  \quad i=1, \quad k=2..3 $$

$$ \sum_{i=1}^{3} x_{ij} \le b_{j}, \quad j=1..5 $$

$$ x_{ij} \ge 0, \quad i=1..3, \quad j=1..5 $$

$$ \mu(a_{ijk})  \ge 0.8 $$

Вирішуємо нерівність та знайдемо кінці інтервалу нечіткої множини $a_{ij}$ рівня $\alpha=0.8$

$$ \mu_{ij}(a_{ij}) = \frac{1}{1 + \frac{(a_{ij} - \overline{a}_{ij})^2}{\overline{a}_{ij}^2}} \ge 0.8 $$

$$ 1 \ge 0.8 (1 + \frac{(a_{ij} - \overline{a}_{ij})^2}{\overline{a}_{ij}^2}) $$

$$ 1 \ge 0.8 + 0.8 \frac{(a_{ij} - \overline{a}_{ij})^2}{\overline{a}_{ij}^2} $$

$$ 0.8 \frac{(a_{ij} - \overline{a}_{ij})^2}{\overline{a}_{ij}^2} \le 0.2$$

$$ (a_{ij} - \overline{a}_{ij})^2 \le 0.25 \overline{a}_{ij}^2$$

$$ |a_{ij} - \overline{a}_{ij}| \le 0.5 |\overline{a}_{ij}|$$

Зробимо зауваження, що згідно умовам задачі ${a}_{ij} > 0$, отже 

$$ |a_{ij} - \overline{a}_{ij}| \le 0.5 \overline{a}_{ij}$$

$$ \overline{a}_{ij} - 0.5 \overline{a}_{ij} \le a_{ij} \le \overline{a}_{ij} + 0.5 \overline{a}_{ij}$$

$$ 0.5 \overline{a}_{ij} \le a_{ij} \le 1.5 \overline{a}_{ij}$$

#### Чітка модель

$$ 
   200 x_{11} + 100 x_{12} + 300 x_{13} +  50 x_{14} +  20 x_{15} + \\ +
    70 x_{21} + 100 x_{22} + 300 x_{23} + 100 x_{24} + 400 x_{25} + \\ +
    60 x_{31} + 150 x_{32} + 100 x_{33} + 300 x_{34} + 500 x_{35} \rightarrow \max
$$

При обмеженнях

$$
               200 x_{11} + 100 x_{12} + 300 x_{13} +  50 x_{14} +  20 x_{15}  = \\ =
  \frac{1}{4} ( 70 x_{21} + 100 x_{22} + 300 x_{23} + 100 x_{24} + 400 x_{25}) 
$$

$$
               200 x_{11} + 100 x_{12} + 300 x_{13} +  50 x_{14} +  20 x_{15}  = \\ =
  \frac{1}{2} ( 60 x_{31} + 150 x_{32} + 100 x_{33} + 300 x_{34} + 500 x_{35})
$$

$$ x_{11} + x_{21} + x_{31} \le 10 $$

$$ x_{12} + x_{22} + x_{32} \le 4 $$

$$ x_{13} + x_{23} + x_{33} \le 60 $$

$$ x_{14} + x_{24} + x_{34} \le 7 $$

$$ x_{15} + x_{25} + x_{35} \le 5 $$

#### Задача песиміста:

$$ 100 x_{11} +  50 x_{12} + 150 x_{13} +  25 x_{14} +  10 x_{15} + \\ +
    35 x_{21} +  50 x_{22} + 150 x_{23} +  50 x_{24} + 200 x_{25} + \\ +
    30 x_{31} +  75 x_{32} +  50 x_{33} + 150 x_{34} + 250 x_{35} \rightarrow \max
$$

При обмеженнях

$$             100 x_{11} +  50 x_{12} + 150 x_{13} +  25 x_{14} +  10 x_{15}  = \\ =
  \frac{1}{4} ( 35 x_{21} +  50 x_{22} + 150 x_{23} +  50 x_{24} + 200 x_{25})
$$

$$             100 x_{11} +  50 x_{12} + 150 x_{13} +  25 x_{14} +  10 x_{15}  = \\ =
  \frac{1}{2} ( 30 x_{31} +  75 x_{32} +  50 x_{33} + 150 x_{34} + 250 x_{35})
$$

$$ x_{11} + x_{21} + x_{31} \le 10 $$

$$ x_{12} + x_{22} + x_{32} \le 4 $$

$$ x_{13} + x_{23} + x_{33} \le 60 $$

$$ x_{14} + x_{24} + x_{34} \le 7 $$

$$ x_{15} + x_{25} + x_{35} \le 5 $$

#### Задача оптиміста:

$$ 300 x_{11} + 150 x_{12} + 450 x_{13} +  75 x_{14} +  30 x_{15} + \\ +
   105 x_{21} + 150 x_{22} + 450 x_{23} + 150 x_{24} + 600 x_{25} + \\ +
    90 x_{31} + 225 x_{32} + 150 x_{33} + 450 x_{34} + 750 x_{35} \rightarrow \max
$$

При обмеженнях

$$             300 x_{11} + 150 x_{12} + 450 x_{13} +  75 x_{14} +  30 x_{15}  = \\ =
  \frac{1}{4} (105 x_{21} + 150 x_{22} + 450 x_{23} + 150 x_{24} + 600 x_{25}) 
$$

$$             300 x_{11} + 150 x_{12} + 450 x_{13} +  75 x_{14} +  30 x_{15}  = \\ =
  \frac{1}{2} ( 90 x_{31} + 225 x_{32} + 150 x_{33} + 450 x_{34} + 750 x_{35})
$$

$$ x_{11} + x_{21} + x_{31} \le 10 $$

$$ x_{12} + x_{22} + x_{32} \le 4 $$

$$ x_{13} + x_{23} + x_{33} \le 60 $$

$$ x_{14} + x_{24} + x_{34} \le 7 $$

$$ x_{15} + x_{25} + x_{35} \le 5 $$
