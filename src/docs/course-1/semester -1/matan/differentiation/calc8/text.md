# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Диференціювання. Задача 8. Варіант 2.

Знайти похідну

$$y=\cos \ln 2 - \frac{1}{3} \frac{
    \cos^2 3x
}{
    \sin 6x
}
$$

### Розв'язок

$$y'=
\left(\cos \ln 2 - \frac{1}{3} \frac{
    \cos^2 3x
}{
    \sin 6x
}\right)'
=$$

$$=- \frac{1}{3}
\left(  \frac{
    \cos^2 3x
}{
    \sin 6x
}\right)'
=$$

$$=- \frac{
    (\cos^2 3x)' \cdot \sin 6x -
    \cos^2 3x \cdot (\sin 6x)'
}{
    3\sin^2 6x
}
=$$

$$=- \frac{
    2\cos 3x \cdot (\cos 3x)' \cdot \sin 6x -
    6\cos^2 3x \cdot \cos 6x
}{
    3\sin^2 6x
}
=$$

$$=- \frac{
    -6\cos 3x \cdot \sin 3x \cdot \sin 6x -
    6\cos^2 3x \cdot \cos 6x
}{
    3\sin^2 6x
}
=$$

$$= \frac{
    2\cos 3x \cdot \sin 3x \cdot \sin 6x 
    +2\cos^2 3x \cdot \cos 6x
}{
   ( \sin 6x)^2
}
=$$

$$= \frac{
    4\cos^2 3x \cdot \sin^2 3x  
    +2\cos^2 3x \cdot (1-2\sin^23x)
}{
    4\sin^2 3x \cdot \cos^23x
}
=$$

$$= \frac{
    4\cos^2 3x \cdot \sin^2 3x  
    +2\cos^2 3x 
    -4\cos^2 3x \cdot \sin^2 3x
}{
    4\sin^2 3x \cdot \cos^2 3x
}
=$$

$$= \frac{
    2\cos^2 3x 
}{
    4\sin^2 3x \cdot \cos^2 3x
}
=$$

$$= \frac{
    1 
}{
    2\sin^2 3x
}$$
