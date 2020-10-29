# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Задача 1

Довести, що $\lim_{n\to\infty} a_n =  a$ (вказати $N(\varepsilon))$

Варіант 2:
$$\lim_{n\to\infty} a_n =  a, a_n = \frac{4n-1}{2n+1}, a=2$$

### Розв'язок

$$
  \exists  N(\varepsilon),
  \forall n>N,
  \left| a_n-a\right| <\, \varepsilon
$$

$$\left| \frac{4n-1}{2n+1}-2\right| <\, \varepsilon $$

$$  \left|  \frac{4n-1-4n-2}{2n+1}\right| <\, \varepsilon $$
$$  \left|  -\frac{3}{2n+1}\right| <\, \varepsilon   $$
$$  \frac{3}{2n+1} <\, \varepsilon    $$
$$  \frac{3}{\varepsilon} <\, 2n+1    $$
$$  \frac{3}{\varepsilon}-1 <\, 2n    $$

$$  n \> > \> \frac{3}{2\varepsilon} - \> \frac{1}{2}$$
$$  N(\varepsilon) = \left[ \frac{3}{2\varepsilon} - \> \frac{1}{2} \right] + 1$$
