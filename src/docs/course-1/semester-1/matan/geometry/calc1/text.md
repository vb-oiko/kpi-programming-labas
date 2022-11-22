# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Аналітична геометрія. Задача 1. Варіант 2.

Написати розклад вектора $\vec{x}$ по векторах $\vec{p}, \vec{q}, \vec{r}$.

$$\vec{x} = \{6, 12, -1\},\;
\vec{p} = \{1, 3, 0\},\;
\vec{q} = \{2, -1, 1\},\;
\vec{r} = \{0, -1, 2\}
$$

### Розв'язок

Необхідно знайти такі $a,b,c$, що:

$$a \cdot \vec{p} + b \cdot \vec{q} + c \cdot \vec{r} = \vec{x} 
$$

$$a \cdot \begin{pmatrix} p_1 \\ p_2 \\p_3 \end{pmatrix} +
b \cdot \begin{pmatrix} q_1 \\ q_2 \\q_3 \end{pmatrix} +
c \cdot \begin{pmatrix} r_1 \\ r_2 \\r_3 \end{pmatrix} =
\begin{pmatrix} x_1 \\ x_2 \\x_3 \end{pmatrix}
$$

$$\begin{cases}
    a + 3b = 6, \\
    3a - b - c = 12 \\
    b + 2c = -1
\end{cases}
$$

Розв'яжемо систему методом підстановки. Виразимо змінні $a$ та $c$ через $b$ через перше та третє рівняння відповідно та підставимо у друге:

$$a = 6 - 3b$$
$$c = -\frac{1+b}{2}$$

$$3 \cdot (6 - 3b) - b - (-\frac{1+b}{2}) = 12
$$

$$36 -18b - 2b + 1 + b = 24
$$

$$19b = 13
$$

$$b = \frac{13}{19}
$$

$$a = 6 - 3 \cdot \frac{13}{19} = \frac{6\cdot19 - 3\cdot 13}{19} = \frac{114-39}{19} = \frac{75}{19}
$$

$$c = -\frac{1+\frac{13}{19}}{2} = -\frac{19+13}{38} = -\frac{16}{19}$$

Отже:

$$\vec{x} = \frac{75}{19} \cdot \vec{p} + \frac{13}{19} \cdot \vec{q} -\frac{16}{19} \cdot \vec{r}  
$$