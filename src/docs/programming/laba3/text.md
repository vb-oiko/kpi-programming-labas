# ОПЕРАТОРИ ЦИКЛУ

### Мета лабораторної роботи:

Навчитися правильно реалізовувати циклічні алгоритми засобами мови С.

### Порядок виконання роботи

1. Проаналізувати умову задачі.
2. Розробити алгоритм та створити програму розв’язання задачі згідно з номером варіанту.
3. Результати роботи оформити протоколом:
   1. Титульний лист.
   2. Номер завдання.
   3. Завдання.
   4. Лістинг програми.
   5. Результати виконання програми.
   6. Висновки.

### Завдання

3-2. Обчислити добуток:

$$
p = x_n(x_n + x_{n-1})(x_n + x_{n-1} + x_{n-2})...(x_n + x_{n-1} + ... + x_1)
$$

значення $x_i$ послідовно вводити з клавіатури, масив не утворювати.

### Аналіз умов задачі

Розпишемо формулу для декількох перших $x$:

з умови задачі не вбачається значення $p$, якщо $n =1$, але можемо припустити, що $p = x_1$, якщо $n =1$,

$$
p_1 = x_1
$$

$$
p_2 = x_2 (x_2 + x_1)
$$

$$
p_3 = x_3 (x_3 + x_2) (x_3 + x_2 + x_1)
$$

$$
p_4 = x_4 (x_4 + x_3) (x_4 + x_3 + x_2) (x_4 + x_3 + x_2 + x_1)
$$

Для того, щоб виконати умову завдання про неутворення масиву, потрібно, щоб користувач вводив значення членів послідовності у наступному порядку: спочатку $x_n$, потім $x_{n-1}$, потім $x_{n-2}$ .... і так далі, а в кінці $x_1$.

Також, з умов задачі, ми можемо припусти, що кількість членів послідовності $n$ заздалегідь відома. Тому ми можемо на початку виконання програми запросити у користувача значення змінної $n$ та використовувати у алгоритмі різновид циклу з передумовою з використанням оператора `for`
