### Задача 1.3

Три сорти взаємозамінної сировини $(i=1, 2, 3)$ в кількості $200, 100$ та $300$ кг використовується для виробництва чотирьох виробів $(j=1, 2, 3, 4)$. Норми витрат $a_{ij}$ сировини $i$ на виробництво виробу $j$ є
нормально розподіленими випадковими величинами з середнім $\mu_{ij}$ та дисперсію $\sigma_{ij}^2$ , а виробничі витрати рівномірно розподілені випадкові величини на інтервалі $[\gamma_{ij}, \delta_{ij}]$. Вихідні дані наведені в таблицях 1.3(а) і 1.3(б).
Скласти такий план виробництва виробів, щоб з ймовірністю $0,9$ випустити $25$ одиниць першого виробу, $45$ одиниць другого виробу, $30$ одиниць третього та $70$ одиниць четвертого при мінімальних очікуваних сумарних виробничих витратах.

Таблиця 1.3(а)
![](img1.png)

Таблиця 1.3(а)
![](img2.png)

### Розв'язок

Складемо математичну модель даної задачі для мінімальних очікуваних сумарних виробничих витратах.
Позначимо через $x_{ij}$ - кількість одиниць $j$-го виробу, вироблених із $i$-го сорту сировини, через $b_i$ кількість сировини $i$-го сорту, а через $p_j$ план виробництва.

$$  \sum_{i=1}^{3} \sum_{j=1}^{4} \frac{\delta_{ij}+\gamma_{ij}}{2} x_{ij} -
\Phi^{-1}(\alpha_0) \left(\sum_{i=1}^{n} \sum_{j=1}^{m} \frac{(\delta_{ij}-\gamma_{ij})^2}{12} x_{ij}^2 \right) \rightarrow min, \quad \alpha_0=0.9 $$
 
При обмеженнях

$$ \sum_{i=1}^3 x_{ij} \ge p_j, j=1..4 
$$

$$  \sum_{j=1}^{4} x_{ij} \mu_{ij} + \Phi^{-1}(\alpha_0) \left( \sum_{j=1}^{4} x_{ij}^2 \sigma^2_{ij} \right)^{\frac{1}{2}} \le b_i ,\quad i=1..3
$$

Підставляючи дані з таблиці, запишемо цільову функцію:

$$ 40x_{11}+30x_{12}+15x_{13}+35x_{14}+30x_{21}+25x_{22}+45x_{23}+40x_{24}+20x_{31}+45x_{32}+20x_{33}+$$

$$+35x_{34}-\Phi^{-1}(0.9) ( 133\frac{1}{3}x_{11}^2+75x_{12}^2+8\frac{1}{3}x_{13}^2+ 75x_{14}^2+75x_{21}^2+8\frac{1}{3}x_{22}^2+8\frac{1}{3}x_{23}^2+33\frac{1}{3}x_{24}^2+ $$

$$+33\frac{1}{3}x_{31}^2+75x_{32}^2+33\frac{1}{3}x_{33}^2+33\frac{1}{3}x_{34}^2 )^{\frac{1}{2}} \rightarrow min$$

При обмеженнях

$$ x_{11} + x_{21} + x_{31} \ge 25 $$

$$ x_{12} + x_{22} + x_{32} \ge 45 $$

$$ x_{13} + x_{23} + x_{33} \ge 30 $$

$$ x_{14} + x_{24} + x_{34} \ge 70 $$

$$ 2 x_{11} + 0.5 x_{12} + 3 x_{13} + x_{14} + \Phi^{-1}(0.9) (3 x_{11}^2 + x_{12}^2 + 2 x_{13}^2 + 2 x_{14}^2)^\frac{1}{2} \le 200
$$

$$ x_{21} + 2 x_{22} + 2 x_{23} + 2 x_{24} + \Phi^{-1}(0.9) (3 x_{21}^2 + 3 x_{22}^2 + 3 x_{23}^2 + 4 x_{24}^2)^\frac{1}{2} \le 100
$$

$$ 2 x_{31} + x_{32} + 2 x_{33} + 2 x_{34} + \Phi^{-1}(0.9) (5 x_{31}^2 + 2 x_{32}^2 + 4 x_{33}^2 + 3 x_{34}^2)^\frac{1}{2} \le 300
$$