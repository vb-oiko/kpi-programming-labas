# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Лінійна алгебра. Задача 9. Варіант 2.

Знайти власні числа та власні вектори оператора, заданого матрицею

$$\begin{pmatrix}
   2 & -1 & 0 \\
   -1 & 2 & 0 \\
   1 & -1 & 1 \\
\end{pmatrix}
$$

### Розв'язок

$$A = \begin{pmatrix}
   2 & -1 & 0 \\
   -1 & 2 & 0 \\
   1 & -1 & 1 \\
\end{pmatrix}
$$

Знайдемо значення $\lambda$ такі, що $\det(A - \lambda I) = 0$:

$$\det \begin{pmatrix}
   2-\lambda & -1 & 0 \\
   -1 & 2-\lambda & 0 \\
   1 & -1 & 1-\lambda \\
\end{pmatrix} =
$$


$$(2-\lambda) \cdot \begin{vmatrix}
   2-\lambda & 0 \\
   -1 & 1-\lambda \\
\end{vmatrix} - (2-\lambda) \cdot \begin{vmatrix}
   2-\lambda &  0 \\
   1 &  1-\lambda \\
\end{vmatrix} + (1-\lambda) \cdot \begin{vmatrix}
   2-\lambda & -1 \\
   -1 & 2-\lambda \\
\end{vmatrix} =
$$

$$= (2-\lambda)^2 \cdot (1-\lambda) -(2-\lambda)^2 \cdot (1-\lambda) + (1-\lambda)\cdot((2-\lambda)^2 -1) =
$$

$$=  (1-\lambda) \cdot ((2-\lambda) -1) \cdot ((2-\lambda) +1) =
$$

$$=  (1-\lambda) \cdot (1-\lambda) \cdot (3-\lambda) = 0
$$

Отже маємо одне власне число кратності $2$ та одне власне число кратності $1$:

$$\lambda_{1,2} = 1, \qquad \lambda_3=3
$$

Знайдемо власний вектор, який відповідає власному числу $\lambda=1$:

$$(A- \lambda I) \vec{f} = 0
$$

$$\begin{pmatrix}
   (2-1) & -1 & 0 \\
   -1 & (2-1) & 0 \\
   1 & -1 & (1-1) \\
\end{pmatrix} \cdot
\begin{pmatrix} f_1 \\ f_2 \\f_3 \end{pmatrix} = \vec{0}
$$

$$\begin{cases}
    f_1 - f_2 = 0 \\
    -f_1 + f_2 = 0 \\
    f_1 - f_2 = 0
\end{cases}
$$


$$f_1=f_2
$$

Загальне рішення системи: 

$$\begin{pmatrix} f_2 \\ f_2 \\f_3 \end{pmatrix} 
$$

Фундаментальна система рішень:

$$f_2 \cdot \begin{pmatrix} 1 \\ 1 \\0 \end{pmatrix} +
f_3 \cdot \begin{pmatrix} 0 \\ 0 \\1 \end{pmatrix} 
$$

Нехай $f_2=1, f_3=0$, для першого власного вектору, а $f_2=0, f_3=1$ для другого власного вектору, тоді

$$\lambda=1,\begin{pmatrix} 1 \\ 1 \\0 \end{pmatrix};
\lambda=1,\begin{pmatrix} 0 \\ 0 \\1 \end{pmatrix}
$$



Знайдемо власний вектор, який відповідає власному числу $\lambda=3$:

$$(A- \lambda I) \vec{f} = 0
$$

$$\begin{pmatrix}
   (2-3) & -1 & 0 \\
   -1 & (2-3) & 0 \\
   1 & -1 & (1-3) \\
\end{pmatrix} \cdot
\begin{pmatrix} u_1 \\ u_2 \\u_3 \end{pmatrix} = \vec{0}
$$

$$\begin{cases}
    -u_1 - u_2 = 0 \\
    -u_1 - u_2 = 0 \\
    u_1 - u_2 -2 u_3= 0
\end{cases}
$$

$$ u_1 = -u_2
$$

$$ u_2 = -u_3
$$

$$ u_1 = u_3
$$

Загальне рішення системи: 

$$\begin{pmatrix} u_3 \\ -u_3 \\u_3 \end{pmatrix} 
$$

Фундаментальна система рішень:

$$u_3 \cdot \begin{pmatrix} 1 \\ -1 \\1 \end{pmatrix} 
$$

Нехай $u_3=1$, тоді власний вектор для $\lambda=3$:

$$\begin{pmatrix} 1 \\ -1 \\1 \end{pmatrix} 
$$
