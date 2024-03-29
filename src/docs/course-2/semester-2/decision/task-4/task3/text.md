### Задача 4.3

1. Знайти найкращий компромісний розв'язок наступної задачі багатокритеріальної оптимізації 

$$ F_1(x) = x_1+x_2 \rightarrow \max$$

$$ F_2(x) = 2x_1-x_2 \rightarrow \min$$

при умовах 

$$ x_1 + 2 x_2 \ge 32 $$

$$ -2 x_1 + x_2 \le 16 $$

$$ x_1 + 2 x_2 \le 64 $$

$$ - x_1 + 4 x_2 \ge 40 $$

$$ x_1 \le 24 $$

$$ x_1, x_2 \ge 0 $$

$$ \rho_1 = \rho_2 = 0.5 $$

1. Вважаючи, що величини $C_{ij}$ є нечіткими числами з функцією приналежності
   
$$ \mu(C_{ij}) = \frac{1}{1 + (C_{ij} - \overline{C}_{ij})^2},\quad 
\overline{C}_{11}= 1 , 
\overline{C}_{12}= 1, 
\overline{C}_{21}= 2, 
\overline{C}_{22}= -1
$$

знайти найкращий компромісний розв'язок даної задачі, оптимальний по Парето, рівня $\alpha=0.8$. 

### Розв'язок

#### Частина 1

Для функції $ F_2(x)$ маємо критерій мінімізації. Отже, перейдемо до задачі максимізації, змінивши знак при коефіцієнтах:

$$ F_1(x) = x_1+x_2 \rightarrow \max$$

$$ F_2(x) = -2x_1+x_2 \rightarrow \max$$

Розв'яжемо задачу графоаналітично. Побудуємо область допустимих рішень, яка визначається за наведених вище умов.

![](Screenshot%202021-12-25%20at%2017.47.53.png)

Знаходимо крайні точки ОДР та їх координати:

$$ A(0, 16), \quad
B(6.4, 28.8), \quad
C(24, 20), \quad
D(24, 16), \quad
E(8, 12), \quad $$

$$ F_{1 \max} = F_1(C) = 44 $$

$$ F_{1 \min} = F_1(A) = 16 $$

$$ F_{2 \max} = F_2(B) = 16 $$

$$ F_{2 \min} = F_2(D) = -32 $$

$$ F_1(x) = \frac{x_1+x_2-16}{28} $$

$$ F_2(x) = \frac{-2x_1+x_2+32}{48} $$

Отже, найкращий компромісний розв'язок лежить на відрізку $BC$.

$$\begin{cases}
\frac{x_1+x_2-16}{28} = \frac{-2x_1+x_2+32}{48} \\
x_1 + 2 x_2 = 64 
\end{cases}
$$

$$ 12 (64 - 2 x_2) + 12 x_2 - 192 = -14 (64 - 2 x_2) + 7 x_2 + 224 $$

$$ 768 - 24 x_2 + 12 x_2 - 192 = -896 + 28 x_2 + 7 x_2 + 224 $$

$$ 1248 = 47 x_2 $$

$$ x_1 \approx 10.894, \quad x_2 \approx 26.553 $$

#### Частина 2

Розв'язуємо нерівності і знаходимо інтервал приналежності рівня $\alpha=0.8$ для нечітких коефіцієнтів $C_{ij}$

$$ \mu(C_{ij}) = \frac{1}{1 + (C_{ij} - \overline{C}_{ij})^2} \ge 0.8 $$

$$ 1 \ge 0.8 (1 + (C_{ij} - \overline{C}_{ij})^2) $$

$$ 1 \ge 0.8 + 0.8(C_{ij} - \overline{C}_{ij})^2 $$

$$ 0.8(C_{ij} - \overline{C}_{ij})^2 \le 0.2 $$

$$ (C_{ij} - \overline{C}_{ij})^2 \le 0.25 $$

$$ |C_{ij} - \overline{C}_{ij}| \le 0.5 $$

$$ \overline{C}_{ij} + 0.5 \le C_{ij} \le \overline{C}_{ij} + 0.5 $$

Таким чином знаходимо інтервали для $C_{ij}$:

$$ 1 - 0.5 \le C_{11} \le 1 + 0.5 $$

$$ 1 - 0.5 \le C_{12} \le 1 + 0.5 $$

$$ 2 - 0.5 \le C_{21} \le 2 + 0.5 $$

$$ -1 - 0.5 \le C_{22} \le -1 + 0.5 $$

Виписуємо критерії песиміста та оптиміста:

$$ F_{1L} = (1 - 0.5) x_1 + (1 - 0.5) x_2 $$

$$ F_{1U} = (1 + 0.5) x_1 + (1 + 0.5) x_2 $$

$$ F_{2L} = (2 - 0.5) x_1 + (-1 - 0.5) x_2 $$

$$ F_{2U} = (2 + 0.5) x_1 + (-1 + 0.5) x_2 $$

Розв'язуємо графічно ці задачі

$$\max F_{1L} = (1 - 0.5) \times 24 + (1 - 0.5) \times 20 = 22$$

$$\max F_{1U} = (1 + 0.5) \times 24 + (1 + 0.5) \times 20 = 66 $$

$$\max F_{2L} = (2 - 0.5) \times 6.4 + (-1 - 0.5) \times 28.8 = -33.6 $$

$$\max F_{2U} = (2 + 0.5) \times 6.4 + (-1 + 0.5) \times 28.8 = 1.6 $$

$$\min F_{1L} = (1 - 0.5) \times 0 + (1 - 0.5) \times 16 = 8 $$

$$\min F_{1U} = (1 + 0.5) \times 0 + (1 + 0.5) \times 16 = 24 $$

$$\min F_{2L} = (2 - 0.5) \times 24 + (-1 - 0.5) \times 16 = 12 $$

$$\min F_{2U} = (2 + 0.5) \times 24 + (-1 + 0.5) \times 16 = 52 $$

Тепер запишемо задачу знаходження компромісного рішення:

$$ \max \lambda $$

$$ \begin{cases}
(22-8) \lambda - (0.5 x_1 +0.5 x_2) \le -8 \\
(66-24) \lambda - (1.5 x_1 +1.5 x_2) \le -24 \\
(-33.6-12) \lambda - (1.5 x_1 -1.5 x_2) \le -12 \\
(1.6-52) \lambda - (2.5 x_1 -0.5 x_2) \le -52 \\
\end{cases}$$

$$ \begin{cases}
14 \lambda -0.5 x_1 -0.5 x_2 \le -8 \\
42 \lambda -1.5 x_1 -1.5 x_2 \le -24 \\
-45.6 \lambda -1.5 x_1 +1.5 x_2 \le -12 \\
-50.4 \lambda -2.5 x_1 +0.5 x_2 \le -52 \\
\end{cases}$$

Розв'язуємо дану задачу симплекс методом і знаходимо найкраще компромісне рішення, яке максимізує $\lambda$.

$$ \lambda = 1,\quad x_1 =24,\quad x_2 =20 $$