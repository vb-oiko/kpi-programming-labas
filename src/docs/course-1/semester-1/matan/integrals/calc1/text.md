# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Інтеграли. Задача 1. Варіант 2.

Знайти невизначений інтеграл

$$\int \arctg \sqrt{4x-1} dx
$$

### Розв'язок

Застосуємо метод інтегруванн частинам:

$$\int u \; dv = uv - \int v \; du
$$

$$d\arctg \sqrt{4x-1}=\frac{d\sqrt{4x-1}}{1+4x-1}=
\frac{4dx}{4x\cdot2\sqrt{4x-1}} = \frac{dx}{2x\sqrt{4x-1}}
$$


$$\int \arctg \sqrt{4x-1} dx =
$$

$$=\begin{vmatrix}
   u = \arctg \sqrt{4x-1} & du = \frac{dx}{2x\sqrt{4x-1}} \\
   v=x & dv=dx
\end{vmatrix}
=$$

$$= \arctg \sqrt{4x-1} \cdot x - \int x \cdot \frac{dx}{2x\sqrt{4x-1}}
=$$

$$= x \arctg \sqrt{4x-1} - \frac{1}{4} \int  \cdot \frac{4dx}{2\sqrt{4x-1}}
=$$

$$= x \arctg \sqrt{4x-1} - \frac{1}{4} \sqrt{4x-1} + C
$$

