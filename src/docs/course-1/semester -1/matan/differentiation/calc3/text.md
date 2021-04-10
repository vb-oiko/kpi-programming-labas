# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Диференціювання. Задача 3. Варіант 2.

Знайти диференціал $dy$

$$y=\tg(2\arccos\sqrt{1-2x^2}), x>0
$$

### Розв'язок

$$dy=d\tg(2\arccos\sqrt{1-2x^2})=
$$

Позначимо $z=\sqrt{1-2x^2}$

$$dy=d\tg(2\arccos z)=
$$

$$=\frac
{2\cdot d\arccos z}
{\cos^2(2\arccos z)}=
$$

$$=
\frac
    {2\arccos z}
    {(\cos(2\arccos z))^2}
\cdot \frac
    {dz}
    {\sqrt{1-z^2}}
=$$

$$=
\frac
    {2\arccos z}
    {(2\cos^2(\arccos z)-1)^2}
\cdot \frac
    {dz}
    {\sqrt{1-z^2}}
=$$

$$=
\frac
    {2\arccos z}
    {(2z^2-1)^2}
\cdot \frac
    {dz}
    {\sqrt{1-z^2}}
=$$

$$=
\frac
    {2\arccos z\>dz}
    {(2z^2-1)^2(\sqrt{1-z^2})}
$$

$$dz= d\sqrt{1-2x^2}
=\frac{d(1-2x^2)}{\sqrt{1-2x^2}}
=-\frac{4xdx}{\sqrt{1-2x^2}}
$$

$$z^2=1-2x^2
$$

$$dy=
\frac
    {2\arccos \sqrt{1-2x^2}\>\cdot -4xdx}
    {(2\sqrt{1-2x^2}^2-1)^2(\sqrt{1-\sqrt{1-2x^2}^2})\sqrt{1-2x^2}}
=$$

$$=
\frac
    {-8x\arccos \sqrt{1-2x^2}\>dx}
    {(2(1-2x^2)-1)^2(\sqrt{1-(1-2x^2)})\sqrt{1-2x^2}}
=$$

$$=
\frac
    {-8x\arccos \sqrt{1-2x^2}\>dx}
    {(1-4x^2)^2\sqrt{2x^2}\sqrt{1-2x^2}}
=$$

$$=
\frac
    {-4\sqrt2\arccos \sqrt{1-2x^2}}
    {\sqrt{1-2x^2}(1-4x^2)^2}dx
$$


