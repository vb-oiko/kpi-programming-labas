### Задача 3.9

Один із видів кінцевої продукції, що випускається галуззю, комплектується із видів виробів, які можна виготовляти на різних підприємствах. Кількість виробів кожного виду, що входить до комплекту готової продукції, встановлено. Крім того, відома місячна продуктивність кожного підприємства з випуску виробів кожного виду. Потрібно оптимально розподілити випуск виробів на підприємствах, тобто визначити спеціалізацію підприємств таким чином, щоб забезпечити максимальний випуск комплектної продукції [1;3;5].

У табл.1. представлені вихідні дані всім варіантів. Продуктивність підприємства задана у тисячах тонн.

Числа за варіантами розташовано відповідно до наступної схеми:

варіант 1 - варіант 2;
варіант 3 – варіант 4.

Таблиця 1.
![](img.png)


Припустимо, що місячна продуктивність кожного підприємства є нечіткою величиною з функцією власності

$$ \mu_{ij}(a_{ij}) = \frac{1}{1 + \frac{(a_{ij} - \overline{a}_{ij})^2}{\overline{a}_{ij}^2}}
$$

, де $a_{ij}$ - це дані, наведені в таблиці 1, $i$ - номер виробу; $j$ - тип підприємства, $j=\overline{1,4}$. Побудувати відповідну модель задачі НМП. Знайти підмножини максимізуючих альтернатив, недомінованих, зі ступенем $\alpha=0.8$, зокрема для стратегій оптиміста та песиміста, та порівняти отримані рішення.

Розв'язати задачу для варіанта 1.


### Розв'язок

Позначимо через $x_{ij}$ - кількість підприємстві $j$-го типу, на яких буде вироблятися виріб $i$-го типу, через $b_{j}$ - кількість підприємств $j$-го типу, а через $p_i$ - кількість виробів $i$-го типу у комплекті. Тоді математична модель матиме такий вигляд:

$$ \max \sum_{i=1}^{3} \sum_{j=1}^{5} a_{ij} x_{ij} $$

При обмеженнях

$$ b_i \sum_{j=1}^{5} a_{ij} x_{ij} = b_k \sum_{j=1}^{5} a_{kj} x_{kj}  \quad i=1..3, \quad k=1..3 $$

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

Задача песиміста:

$$  50 x_{11} + 200 x_{12} +   10 x_{13} + 100 x_{14} + 300 x_{15} + \\ +
   7.5 x_{21} + 100 x_{22} + 1.25 x_{23} +  25 x_{24} + 125 x_{25} \rightarrow \max
$$

$$  100 x_{11} + 400 x_{12} +   20 x_{13} + 200 x_{14} + 600 x_{15} = \\
=   7.5 x_{21} + 100 x_{22} + 1.25 x_{23} +  25 x_{24} + 125 x_{25}
$$

$$ x_{11} + x_{21} \le 5 $$

$$ x_{12} + x_{22} \le 3 $$

$$ x_{13} + x_{23} \le 40 $$

$$ x_{14} + x_{24} \le 9 $$

$$ x_{15} + x_{25} \le 2 $$


Задача оптиміста:

$$ 150 x_{11} + 600 x_{12} +   30 x_{13} + 300 x_{14} + 900 x_{15} + \\ +
  22.5 x_{21} + 300 x_{22} + 3.75 x_{23} +  75 x_{24} + 375 x_{25} \rightarrow \max
$$

$$ 300 x_{11} + 1200 x_{12} +   60 x_{13} + 600 x_{14} + 1800 x_{15} = \\
= 22.5 x_{21} +  300 x_{22} + 3.75 x_{23} +  75 x_{24} +  375 x_{25}
$$

$$ x_{11} + x_{21} \le 5 $$

$$ x_{12} + x_{22} \le 3 $$

$$ x_{13} + x_{23} \le 40 $$

$$ x_{14} + x_{24} \le 9 $$

$$ x_{15} + x_{25} \le 2 $$
