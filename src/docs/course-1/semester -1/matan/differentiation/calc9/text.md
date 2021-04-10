# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Диференціювання. Задача 9. Варіант 2.

Знайти похідну

$$y=\arcsin \frac{
    \sqrt{x} - 2
}{
    \sqrt{5x}
}
$$

### Розв'язок

$$y'=\left(\arcsin \frac{
    \sqrt{x} - 2
}{
    \sqrt{5x}
}\right)'
=$$

$$= \frac{1}{ \sqrt{ 1 - \left( \frac{
    \sqrt{x} - 2
}{
    \sqrt{5x}
}\right)^2 } }
\cdot
\left( \frac{
    \sqrt{x} - 2
}{
    \sqrt{5x}
}\right)'
=$$


$$= \frac{ \sqrt5 \sqrt x}
{ \sqrt{  5x -(\sqrt{x} - 2)^2 } }
\cdot
\frac{
   (\sqrt{x} - 2)' \cdot \sqrt5 \sqrt x - (\sqrt x -2) \cdot (\sqrt5 \sqrt x)'
}{
    5x 
}
=$$


$$= \frac{ \sqrt5 \sqrt x}
{ \sqrt{  5x -(\sqrt{x} - 2)^2 } }
\cdot
\frac{
   \sqrt5 \sqrt x - \sqrt 5(\sqrt x -2)
}{
    5x \cdot 2\sqrt{x}
}
=$$

$$= \frac{ \sqrt5 \sqrt x}
{ \sqrt{  5x -(\sqrt{x} - 2)^2 } }
\cdot
\frac{
   \sqrt5 \sqrt x - \sqrt 5 \sqrt x + 2 \sqrt 5
}{
    5x \cdot 2\sqrt{x}
}
=$$

$$= \frac{ \sqrt5 \sqrt x}
{ \sqrt{  5x -(\sqrt{x} - 2)^2 } }
\cdot
\frac{
  2 \sqrt 5
}{
    5x \cdot 2\sqrt{x}
}
=$$

$$= \frac{ 1}
{ x \sqrt{  5x -(\sqrt{x} - 2)^2 } }
=$$

$$= \frac{ 1}
{ x \sqrt{  5x -(x+ 4\sqrt{x} +4 ) } }
=$$

$$= \frac{ 1}
{ x \sqrt{  4x + 4\sqrt{x} - 4  } }
=$$

$$= \frac{ 1}
{ 2x \sqrt{  x + \sqrt{x} - 1  } }
=$$
