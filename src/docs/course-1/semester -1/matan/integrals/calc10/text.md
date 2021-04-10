# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Інтеграли. Задача 10. Варіант 2.

Обчислити визначений інтеграл

$$\int_0^\pi 2^4 \sin^6 x \cos^2 x \; dx
$$

### Розв'язок

Знайдемо невизначений інтеграл

$$y = \int 2^4 \sin^6 x \cos^2 x \; dx =
$$

$$ = \int 2^2 \sin^4 x \cdot 2^2\sin^2x\cos^2 x \; dx =
$$

$$= \int (2 \sin^2 x)^2 \cdot (2\sin x\cos x)^2 \; dx =
$$

$$= \int (1-\cos 2x)^2 \sin^2 2x \; dx =
$$

$$= \int (1-2\cos 2x + \cos^2 2x ) \sin^2 2x \; dx =
$$

$$= \int (\sin^2 2x -2\cos 2x \cdot\sin^2 2x + \cos^2 2x \cdot\sin^2 2x )  \; dx =
$$

$$= \frac{1}{2}\int (1-\cos 4x)\;dx -\int 2 \cos 2x \cdot\sin^2 2x\;dx + \frac{1}{4}\int\sin^2 4x \;dx =
$$

$$= \frac{1}{2}x -\frac{1}{4}\sin 4x+C -\int \sin^2 2x\;d\sin 2x + \frac{1}{8}\int(1-\cos8x )\;dx =
$$

$$= \frac{1}{2}x -\frac{1}{4}\sin 4x -\frac{1}{3} \sin^3 2x + \frac{1}{8}x-\frac{1}{64}\sin 8x +C
$$



Тепер знайдемо різницю значень невизначеного інтегралу у крайніх точках проміжку інтегрування:

$$\int_0^\pi 2^4 \sin^6 x \cos^2 x \; dx = y(\pi) - y(0) = 
$$

$$= \frac{1}{2} \pi -\frac{1}{4}\sin 4 \pi -\frac{1}{3} \sin^3 2 \pi + \frac{1}{8} \pi-\frac{1}{64}\sin 8 \pi - 
$$

$$ -(\frac{1}{2} \cdot 0 -\frac{1}{4}\sin 4 \cdot 0 -\frac{1}{3} \sin^3 2 \cdot 0 + \frac{1}{8} \cdot 0-\frac{1}{64}\sin 8 \cdot 0 )=
$$

$$ = \frac{5\pi}{8}
$$