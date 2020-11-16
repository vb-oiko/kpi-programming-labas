# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Інтеграли. Задача 1. Варіант 2.

Обчислити визначений інтеграл

$$\int_{-2}^0 (x^2-4)\cos3x \; dx
$$

### Розв'язок

Знайдемо невизначений інтеграл

$$y=\int (x^2-4)\cos3x \; dx =
$$

$$=\left|\int u \; dv = uv - \int v \; du \right|=
$$


$$=\begin{vmatrix}
   u = x^2-4 & du = 2x\;dx \\
   v= \frac{1}{3} \sin 3x & dv= \cos 3x \;dx
\end{vmatrix}
=$$

$$= \frac{1}{3} \sin 3x \cdot (x^2-4) - \int \frac{1}{3} \sin 3x \cdot 2x\;dx=
$$

$$= \frac{1}{3} \sin 3x \cdot (x^2-4) -  \frac{2}{3} \int \sin 3x \cdot x\;dx=
$$

$$=\begin{vmatrix}
   u = x & du = dx \\
   v= -\frac{1}{3} \cos 3x & dv= \sin 3x \;dx
\end{vmatrix}
=$$

$$= \frac{1}{3} \sin 3x \cdot (x^2-4) -  \frac{2}{3} \left( 
-\frac{1}{3} x \cos 3x - \int -\frac{1}{3} \cos 3x \;dx=
\right)
$$

$$= \frac{1}{3} \sin 3x \cdot (x^2-4) + \frac{2}{9} x \cos 3x -\frac{2}{9}  \int \cos 3x \;dx=
$$

$$= \frac{1}{3} \sin 3x \cdot (x^2-4) + \frac{2}{9} x \cos 3x -\frac{2}{27}  \sin 3x + C
$$

Тепер знайдемо різницю значень невизначеного інтегралу у крайніх точках проміжку інтегрування:

$$\int_{-2}^0 (x^2-4)\cos3x \; dx = y(0) - y(-2) = 
$$

$$= \frac{1}{3} (\sin 3 \cdot 0) \cdot (0^2-4) + \frac{2}{9} \cdot 0 \cdot \cos (3 \cdot 0) -\frac{2}{27}  \sin (3 \cdot 0) -
$$

$$- \left( \frac{1}{3} (\sin 3 \cdot -2) \cdot (-2^2-4) + \frac{2}{9} \cdot -2 \cdot \cos (3 \cdot -2) -\frac{2}{27}  \sin (3 \cdot -2) \right) =
$$

$$= \frac{4}{9} \cos 6 - \frac{2}{27}  \sin 6
$$

$$
$$