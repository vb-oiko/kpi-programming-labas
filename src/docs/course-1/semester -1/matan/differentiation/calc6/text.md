# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Диференціювання. Задача 6. Варіант 2.

Знайти похідну

$$y=\frac{1}{8} e^{2x} (2-\sin2x - \cos 2x)
$$

### Розв'язок


$$dy=d(\frac{1}{8} e^{2x} (2-\sin2x - \cos 2x))
=$$

$$=\frac{1}{8}d e^{2x}\cdot (2-\sin2x - \cos 2x) + 
\frac{1}{8} e^{2x}\cdot d(2-\sin2x - \cos 2x)
=$$

$$=\frac{1}{4}e^{2x}(2-\sin2x - \cos 2x)dx + 
\frac{1}{8} e^{2x}(-2\cos 2xdx + 2\sin 2x dx)
=$$

$$=\left(\frac{1}{4}(2-\sin2x - \cos 2x) + 
\frac{1}{8} (-2\cos 2x + 2\sin 2x )
\right)
e^{2x}dx
=$$

$$=\left(\frac{1}{4}(2-\sin2x - \cos 2x) + 
\frac{1}{8} (-2\cos 2x + 2\sin 2x )
\right)
e^{2x}dx
=$$

$$=\frac{1}{8}
(4-2\sin2x - 2\cos 2x -2\cos 2x + 2\sin 2x)
e^{2x}dx
=$$

$$=\frac{1}{8}
(4- 4\cos 2x )
e^{2x}dx
=$$

$$=\frac{1}{2}
(1-\cos 2x )
e^{2x}dx
$$

$$=\frac{1}{2}
(1-(1-2sin^2x))
e^{2x}dx
$$

$$=sin^2x \cdot e^{2x}dx
$$

$$y'= e^{2x} \sin^2x
$$
