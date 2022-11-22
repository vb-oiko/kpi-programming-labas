# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Границі. Задача 4. Варіант 2.

Обчислити границю числової послідовності

$$\lim_{n\to\infty} n(\sqrt{n(n-2)} - \sqrt{n^2 -3})$$

### Розв'язок

$$\lim_{n\to\infty} n(\sqrt{n(n-2)} - \sqrt{n^2 -3}) = $$

Розділимо множник у дужках на спряжений вираз. Границя дробу існує, коли існує границі чисельника та знаменника, та границя знаменника не дорівнює нулю. Обчислення границь ми робимо зліва направо, а існування границь доводимо зправа наліво.

$$=\lim_{n\to\infty} n\left( \frac{(\sqrt{n(n-2)} - \sqrt{n^2 -3})(\sqrt{n(n-2)} + \sqrt{n^2 -3})}{\sqrt{n(n-2)} + \sqrt{n^2 -3}}\right) = $$

$$=\lim_{n\to\infty} n\left( \frac{n(n-2) - n^2 +3}{\sqrt{n(n-2)} + \sqrt{n^2 -3}}\right) = $$

$$=\lim_{n\to\infty} n\left( \frac{n^2 - 2n - n^2 +3}{\sqrt{n(n-2)} + \sqrt{n^2 -3}}\right) = $$

$$=\lim_{n\to\infty} n\left( \frac{-2n +3}{\sqrt{n^2-2n} + \sqrt{n^2 -3}}\right) = $$


$$=\lim_{n\to\infty} n\left( 
    \frac
    {\frac{-2n}{n} +\frac{3}{n}}
    {\sqrt{\frac{n^2}{n^2}-\frac{2n}{n^2}} + \sqrt{\frac{n^2}{n^2}-\frac{3}{n^2}}}\right) = $$

$$=\lim_{n\to\infty} n\left( 
\frac
{-2 +\frac{3}{n}}
{\sqrt{1-\frac{2n}{n^2}} + \sqrt{1-\frac{3}{n^2}}}\right) = $$

$$=-\infty$$

