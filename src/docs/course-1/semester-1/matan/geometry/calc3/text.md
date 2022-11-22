# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Аналітична геометрія. Задача 3. Варіант 2.

Знайти косинус кута між векторами $\vec{AB}$ та $\vec{AC}$

$$A = \{0,-3,6\},\;
B = \{-12,-3,-3\},\;
C = \{-9,-3,-6\};
$$


### Розв'язок

Обчислимо координати векторів $\vec{AB}$ та $\vec{AC}$

$$\vec{a} = \vec{AB} = \begin{pmatrix} -12 \\ -3 \\ -3 \end{pmatrix} 
-\begin{pmatrix} 0 \\ -3 \\ 6 \end{pmatrix} 
= \begin{pmatrix} -12 \\ 0 \\ -9 \end{pmatrix}
$$

$$\vec{b} = \vec{AC} = \begin{pmatrix} -9 \\ -3 \\ -6 \end{pmatrix} 
-\begin{pmatrix} 0 \\ -3 \\ 6 \end{pmatrix} 
= \begin{pmatrix} -9 \\ 0 \\ -12 \end{pmatrix}
$$

Косинус кута між векторами дорівнює скалярному добутку векторів, поділеному на добуток модулів векторів.

$$ cos \alpha = \frac{\vec{a} \cdot \vec{b}}{|\vec{a}| \cdot |\vec{b}|}
$$

$$ cos \alpha = \frac{(-12) \cdot (-9) + (-9) \cdot (-12)}{\sqrt{(-12)^2 + (-9)^2} \cdot \sqrt{(-9)^2 \cdot (-12)^2}}=\frac{216}{225}=
$$

$$=0.96
$$