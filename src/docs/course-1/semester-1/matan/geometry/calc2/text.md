# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Аналітична геометрія. Задача 2. Варіант 2.

Чи колінеарні вектори $\vec{c_1}$ та $\vec{c_2}$, побудовані по векторах $\vec{a}$ та $\vec{b}$?

$$\vec{a} = \{1, 0,1\},\;
\vec{b} = \{-2,3,5\},\;
\vec{c_1} = \vec{a} + 2 \vec{b},\;
\vec{c_2} = 3 \vec{a} - \vec{b}\;
$$

### Розв'язок

Обчислимо координати векторів $\vec{c_1}$ та $\vec{c_2}$:

$$\vec{c_1} = 
\begin{pmatrix} 1 \\ 0 \\ 1 \end{pmatrix}
+2 \cdot \begin{pmatrix} -2 \\ 3 \\ 5 \end{pmatrix}=
 \begin{pmatrix} -3 \\ 6 \\ 11 \end{pmatrix}
$$

$$\vec{c_2} = 
3 \cdot \begin{pmatrix} 1 \\ 0 \\ 1 \end{pmatrix}
-\begin{pmatrix} -2 \\ 3 \\ 5 \end{pmatrix}=
 \begin{pmatrix} 5 \\ -3 \\ -2 \end{pmatrix}
$$

Вектори колінеарні, якщо існує число $n$ таке, що:

$$\vec{c_1} = n \vec{c_2}
$$

Як можна побачити з координат векторів $\vec{c_1}$ та $\vec{c_2}$ такого числа $n$ не існує.

Отже вектори $\vec{c_1}$ та $\vec{c_2}$ не колінеарні.
