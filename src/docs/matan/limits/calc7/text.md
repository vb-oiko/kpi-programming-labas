# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Задача 7. Варіант 2.

Довести (знайти $\delta(\epsilon)$), що

$$\lim_{x\to1} 
    \frac{5x^2-4x-1}
    {x-1}
    =6
$$

### Розв'язок

$$\lim_{x\to1} 
    \frac{5x^2-4x-1}
    {x-1} \Leftrightarrow 
$$

$$    \forall \epsilon>0 \quad  \exists  \delta(\epsilon)
    \quad \forall x:|x-1| < \delta \Rightarrow
    \left|\frac{5x^2-4x-1}{x-1}-6\right|<\epsilon
$$

$$    \left|\frac{5x^2-4x-1-6x+6}{x-1}\right|<\epsilon
$$

$$    \left|\frac{5x^2-10x+5}{x-1}\right|<\epsilon
$$

$$    5\left|\frac{x^2-2x+1}{x-1}\right|<\epsilon
$$

$$    5\left|\frac{(x-1)^2}{x-1}\right|<\epsilon
$$

$$    5|x-1|<\epsilon
$$

$$    |x-1|<\frac{1}{5}\epsilon
$$

$$\delta = \frac{1}{5}\epsilon
$$