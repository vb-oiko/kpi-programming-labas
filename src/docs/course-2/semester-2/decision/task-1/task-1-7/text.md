### Задача 1.7

Підприємство володіє ресурсами сировини, робочої сили і обладнання, які необхідні для виробництва чотирьох видів виробів. Нехай питомі витрати ресурсів типу $j$ є випадковими величинами, рівномірно розподіленими у інтервалі $[a_{ij} ,b_{ij}]$, а прибуток на одиницю виробу $i$ складає $C_i$ одиниць. Початкові наведені в таблицях 1.7(а) і 1.7(б).

Визначити оптимальний асортимент виробів, який забезпечує:

А) максимум очікуваного прибутку, при умові реалізованості плану із ймовірністю 0.95;
Б) максимум очікуваного прибутку при асортименті 3:2:1:2;
В) максимум числа компонентів, яке включає один виріб типу 1, два вироби типу 2, три вироби
типу 3 і один виріб типу 4.

Таблиця 1.7(а)
![](img1.png)

Таблиця 1.7(б)
![](img2.png)

### Розв'язок

Позначимо:

- через $x_{i}$ - план виробництва $i$-го виробу, 
- через $a_{ij}$ та $b_{ij}$ межі інтервалу розподілення питомих витрат $j$-го ресурсу для виробництва $i$-го виробу,
- через $p_{j}$ - об'єм $j$-го ресурсу, 
  
  
A) Складемо математичну модель даної задачі для максимуму очікуваного прибутку.

$$  \sum_{i=1}^{4} С_{i} x_{i} \rightarrow min $$

При обмеженнях:

$$ \sum_{i=1}^{4} x_{i} \frac{b_{ij} + a_{ij}}{2} + 
\Phi^{-1}(\alpha_0) \left( \sum_{j=1}^{3} x_{ij}^2 \frac{(b_{ij} - a_{ij})^2}{12} \right)^{\frac{1}{2}}
\le p_j ,\quad j=1..4
$$

Підставляючи дані з таблиці отримаємо модель даної задачі:

$$ 30 x_1 + 25 x_2 + 56 x_3 + 48 x_4 \rightarrow \max
$$

При обмеженнях:

$$ 3 x_1 + 4\frac{1}{2} x_2 + 1\frac{1}{2} x_3 + 3\frac{1}{2} x_4 + \Phi^{-1}(0.95) \left(
\frac{1}{3} x_1^2 + \frac{3}{4} x_2^2 + \frac{1}{12} x_3^2 + \frac{3}{4} x_4^2 
\right)^{\frac{1}{2}} \le 160   
$$

$$ 17\frac{1}{2} x_1 + 12\frac{1}{2} x_2 + 17\frac{1}{2} x_3 + 40 x_4+ \\
\, + \Phi^{-1}(0.95) \left(
2\frac{1}{12} x_1^2 + 2\frac{1}{12} x_2^2 + 2\frac{1}{12} x_3^2 + 33\frac{1}{3} x_4^2 
\right)^{\frac{1}{2}} \le 400   
$$

$$ 9 x_1 + 14 x_2 + 8 x_3 + 16 x_4 + \Phi^{-1}(0.95) \left(
3 x_1^2 + 5\frac{1}{3} x_2^2 + 1\frac{1}{3} x_3^2 + 5\frac{1}{3} x_4^2 
\right)^{\frac{1}{2}} \le 200   
$$

$$ 12 x_1 + 15 x_2 + 6 x_3 + 14 x_4 + \Phi^{-1}(0.95) \left(
5\frac{1}{3} x_1^2 + 8\frac{1}{3} x_2^2 + 1\frac{1}{3} x_3^2 + 1\frac{1}{3} x_4^2 
\right)^{\frac{1}{2}} \le 300   
$$

Б) Для максимуму очікуваного прибутку при асортименті 3:2:1:2 необхідно зробити наступні заміни:

$$ x_1 = 3 x_3, \quad x_2 = 2 x_3, \quad x_4 = 2 x_3
$$

В) Для максимум числа компонентів, яке включає один виріб типу 1, два вироби типу 2, три вироби
типу 3 і один виріб типу 4, необхідно замінити цільову функцію на наступну:

$$ x_1 + 2 x_2 + 3 x_3 + x_4  \rightarrow \max
$$