# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Теорія ймовірності. Задача 1.5. Повторення незалежних випробувань. 
### Формула Бернуллі. Формули Муавра-Лапласа. Формула Пуассона. Варіант 2.

1.5.2 Імовірність того, що кожен клієнт, який звернувся в авіакасу, замовить квиток до аеропорту N, дорівнює 0,1. Знайдіть імовірності того, що із 100 клієнтів, що звернулися в касу, замовлять квиток до аеропорту N: а) менше 15 чоловік; б) від 5 до 12 чоловік; в) більше 20 чоловік.

### Розв'язок

Позначимо як $A$ подію, якщо клієнт, який звернувся в авіакасу, замовить квиток до аеропорту N, як $n=100$ кількість випробувань, як $m$ кількість настання події $A$ при $n$ випробувань, як $p = P(A) = 0.1$ імовірність настання події $A$ і як $q = P(\overline{A})=0.9$ імовірність що подія $A$ не настане.

З огляду на те, що імовірність настання події $A$ в усіх випробуваннях однакова та не залежить від настання або ненастання $A$ в інших випробуваннях, дана послідовність незалежних випробувань відповідає схемі Бернуллі. Згідно формулі Бернуллі:

$$ P_n(k) = C_n^k p^k q^{n-k}
$$

Ймовірність настання події $A$ у $n$ випробуваннях схеми Бернуллі менше ніж $m$ разів знаходять за формулою

$$ P_n(k<m) = P_n(0) + P_n(1) + ... + P_n(m-1)
$$


Обчислення ймовірності за формулою Бернуллі викликає певні труднощі при даних значеннях $n$ та $m$. Отже застосуємо асимптотичну формулу, яка випливає із інтегральної теореми
Муавра–Лапласа

$$ P_n(k_1 \leq m \leq k_2) \approx \hat{\Omicron} \left( \frac{k_2 - np}{\sqrt{npq}} \right) -
\hat{\Omicron} \left( \frac{k_1 - np}{\sqrt{npq}} \right),
\hat{\Omicron}(x) = \frac{1}{\sqrt{2\pi}} \intop_0^x e^{-\frac{t^2}{2}}dt
$$

Обчислимо значення $x$ для $k=0,14,5,12,21,100$, і знайдемо значення функції Лапласа $\hat{\Omicron}(x)$ у [таблицях](https://lectures.7mile.net/teoriia-imovirnosti/dodatok-a.html). Отже

$$ x_{k=0} = \frac{k - np}{\sqrt{npq}} = 
\frac{0 - 100 \cdot 0.1}{\sqrt{100 \cdot 0.9 \cdot 0.1}} =\frac{-10}{3} \approx -3.333
$$

$$ \hat{\Omicron}(x_{k=0}) \approx -0.49954
$$

$$ x_{k=14} = \frac{k - np}{\sqrt{npq}} = 
\frac{14 - 100 \cdot 0.1}{\sqrt{100 \cdot 0.9 \cdot 0.1}} =\frac{4}{3} \approx 1.333
$$

$$ \hat{\Omicron}(x_{k=14}) \approx 0.4087
$$

$$ x_{k=5} = \frac{k - np}{\sqrt{npq}} = 
\frac{5 - 100 \cdot 0.1}{\sqrt{100 \cdot 0.9 \cdot 0.1}} =\frac{-5}{3} \approx -1.667
$$

$$ \hat{\Omicron}(x_{k=5}) \approx -0.4522
$$

$$ x_{k=12} = \frac{k - np}{\sqrt{npq}} = 
\frac{12 - 100 \cdot 0.1}{\sqrt{100 \cdot 0.9 \cdot 0.1}} =\frac{2}{3} \approx 0.667
$$

$$ \hat{\Omicron}(x_{k=12}) \approx 0.24764
$$

$$ x_{k=21} = \frac{k - np}{\sqrt{npq}} = 
\frac{21 - 100 \cdot 0.1}{\sqrt{100 \cdot 0.9 \cdot 0.1}} =\frac{11}{3} \approx 3.667
$$

$$ \hat{\Omicron}(x_{k=21}) \approx 0.499992
$$

$$ x_{k=100} = \frac{k - np}{\sqrt{npq}} = 
\frac{100 - 100 \cdot 0.1}{\sqrt{100 \cdot 0.9 \cdot 0.1}} =\frac{90}{3} = 30
$$

$$ \hat{\Omicron}(x_{k=100}) \approx 0.5
$$

Отже імовірність того, що із 100 клієнтів, що звернулися в касу, замовлять квиток до аеропорту менше 15 чоловік:

$$ P_n(0 \leq m \leq 14) \approx \hat{\Omicron}(x_{k=14}) - \hat{\Omicron}(x_{k=0})  \approx 0.4087 + 0.49954 = 0.90824
$$

Імовірність того, що із 100 клієнтів, що звернулися в касу, замовлять квиток до аеропорту від 5 до 12 чоловік:

$$ P_n(5 \leq m \leq 12) \approx \hat{\Omicron}(x_{k=12}) - \hat{\Omicron}(x_{k=5})  \approx 0.24764 + 0.4522 = 0.69984
$$


Імовірність того, що із 100 клієнтів, що звернулися в касу, замовлять квиток до аеропорту більше 20 чоловік:

$$ P_n(21 \leq m \leq 100) \approx \hat{\Omicron}(x_{k=100}) - \hat{\Omicron}(x_{k=21})  \approx 0.5 - 0.499992 = 0.000008
$$