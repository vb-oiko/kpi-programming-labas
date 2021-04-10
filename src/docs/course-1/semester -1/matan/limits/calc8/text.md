# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Границі. Задача 8. Варіант 2.

Довести, що функція $f(x)$ неперервна в (знайти $\delta(\epsilon)$)

$$f(x)=4x^2-2, x_0=5
$$

### Розв'язок

 Функція називається неперервною в точці $x_0$, якщо вона має в цій точці границю, яка дорівнює значенню функції в точці $x_0$, тобто

 $$\lim_{x\to5}4x^2-2 = 4 \cdot 5^2-2 = 98 \Leftrightarrow
 $$

$$\Leftrightarrow    \forall \epsilon>0 \quad  \exists  \delta(\epsilon)
\quad \forall x:|x-5| < \delta \Rightarrow
|(4x^2-2)-98|<\epsilon
$$

$$|4x^2-2-98|<\epsilon
$$

$$4|x^2-25|<\epsilon
$$

$$|x^2-25|<\frac{1}{4}\epsilon
$$

$$x^2<\frac{1}{4}\epsilon+25
$$

$$x<\sqrt{\frac{1}{4}\epsilon+25}
$$

$$x-5<-5+\sqrt{\frac{1}{4}\epsilon+25}
$$

$$\delta(\epsilon)=-5+\sqrt{\frac{1}{4}\epsilon+25}
$$

