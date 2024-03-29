# Транспортна задача

Роозв'язати наступну транспортну задачу. В таблицях такі позначення: $a_i$ – об'єми виробництва , $b_j$ – об'єми споживання. У комірках таблиць наведені вартості $C_{ij}$ перевезення одиниці вантажу від $i$-го постачальника $j$-му споживачу.

## Варіант 2.

| $a_i \backslash b_j$ | 70  | 40  | 60  | 100 |
| :------------------: | :-: | :-: | :-: | :-: |
|          50          |  2  |  3  |  8  |  4  |
|          70          |  5  |  1  |  7  |  3  |
|          90          |  6  |  4  |  2  | 10  |
|          60          |  3  |  9  |  4  |  5  |

## Розв'язок

Перевіримо необхідність та достатність умов розв'язання задачі.

$$\sum a_i = 50+70+90+60 = 270$$

$$\sum b_j = 70+40+60+100 = 270$$

Як можна побачити, сумарний об'єм виробництва дорівнює сумароному об'єму споживання. Отже, модель вихідної транспортної задачі є закритою.

Нумеруємо елементи у матриці С у порядку зростання.

| $a_i \backslash b_j$ |    70    |    40    |    60    |    100    |
| :------------------: | :------: | :------: | :------: | :-------: |
|          50          |  $2^2$   |  $3^4$   | $8^{14}$ |   $4^7$   |
|          70          | $5^{10}$ |  $1^1$   | $7^{13}$ |   $3^5$   |
|          90          | $6^{12}$ |  $4^8$   |  $2^3$   | $10^{16}$ |
|          60          |  $3^6$   | $9^{15}$ |  $4^9$   | $5^{11}$  |

Заповнюємо матрицю методом мінімального елементу

Мінімальний елемент $c_{22} = 1$. Для цього елемента виробництво дорівнює 70, потреби 40. Оскільки мінімальним є 40, то віднімаємо його.

| $a_i \backslash b_j$ | 70  |   0   | 60  | 100 |
| :------------------: | :-: | :---: | :-: | :-: |
|          50          |  2  |   3   |  8  |  4  |
|          30          |  5  | 40\*1 |  7  |  3  |
|          90          |  6  |   4   |  2  | 10  |
|          60          |  3  |   9   |  4  |  5  |

Наступний мінімальний елемент $c_{11} = 2$.

| $a_i \backslash b_j$ |  20   |   0   | 60  | 100 |
| :------------------: | :---: | :---: | :-: | :-: |
|          0           | 50\*2 |   3   |  8  |  4  |
|          30          |   5   | 40\*1 |  7  |  3  |
|          90          |   6   |   4   |  2  | 10  |
|          60          |   3   |   9   |  4  |  5  |

Наступний мінімальний елемент $c_{33} = 2$.

| $a_i \backslash b_j$ |  20   |   0   |   0   | 100 |
| :------------------: | :---: | :---: | :---: | :-: |
|          0           | 50\*2 |   3   |   8   |  4  |
|          30          |   5   | 40\*1 |   7   |  3  |
|          30          |   6   |   4   | 60\*2 | 10  |
|          60          |   3   |   9   |   4   |  5  |

Наступний мінімальний елемент $c_{24} = 3$.

| $a_i \backslash b_j$ |  20   |   0   |   0   |  70   |
| :------------------: | :---: | :---: | :---: | :---: |
|          0           | 50\*2 |   3   |   8   |   4   |
|          0           |   5   | 40\*1 |   7   | 30\*3 |
|          30          |   6   |   4   | 60\*2 |  10   |
|          60          |   3   |   9   |   4   |   5   |

Наступний мінімальний елемент $c_{44} = 5$.

| $a_i \backslash b_j$ |  20   |   0   |   0   |  10   |
| :------------------: | :---: | :---: | :---: | :---: |
|          0           | 50\*2 |   3   |   8   |   4   |
|          0           |   5   | 40\*1 |   7   | 30\*3 |
|          30          |   6   |   4   | 60\*2 |  10   |
|          0           |   3   |   9   |   4   | 60\*5 |

Наступний мінімальний елемент $c_{31} = 6$.

| $a_i \backslash b_j$ |   0   |   0   |   0   |  10   |
| :------------------: | :---: | :---: | :---: | :---: |
|          0           | 50\*2 |   3   |   8   |   4   |
|          0           |   5   | 40\*1 |   7   | 30\*3 |
|          10          | 20\*6 |   4   | 60\*2 |  10   |
|          0           |   3   |   9   |   4   | 60\*5 |

Останній елемент $c_{34} = 10$.

| $a_i \backslash b_j$ |   0   |   0   |   0   |   0    |
| :------------------: | :---: | :---: | :---: | :----: |
|          0           | 50\*2 |   3   |   8   |   4    |
|          0           |   5   | 40\*1 |   7   | 30\*3  |
|          0           | 20\*6 |   4   | 60\*2 | 10\*10 |
|          0           |   3   |   9   |   4   | 60\*5  |

В результаті отримано перший опорний план, який є допустимим, оскільки всі продукти вивезені від постачальників, потреби споживачів задоволенаі, а план відповідає системі обмежень транспортної задачі.

| $a_i \backslash b_j$ |  70   |  40   |  60   |  100   |
| :------------------: | :---: | :---: | :---: | :----: |
|          50          | 50\*2 |   3   |   8   |   4    |
|          70          |   5   | 40\*1 |   7   | 30\*3  |
|          90          | 20\*6 |   4   | 60\*2 | 10\*10 |
|          60          |   3   |   9   |   4   | 60\*5  |

Підрахуємо число зайнятих комірок таблиці, їх $7$, а має бути $m + n - 1 = 7$. Отже, опорний план є невиродженим.

Значення цільової функції для цього опорного плану:

$$F (x) = 50*2+20*6+40*1+60*2+30*3+10*10+60*5 = 870$$

Перевіримо оптимальність опорного плану. Знайдемо попередні потенціали $u_i , v_j$ по зайнятим коміркам таблиці, в яких $v_j - u_i= c_{ij}$ , припускаючи, що $u_1 = 0$.

$$v_1 - u_1 = 2; v_1 - 0 = 2; v_1 = 2$$

$$v_1 - u_3 = 6; 2 - u_3 = 6; u_3 = -4$$

$$v_3 - u_3 = 2; v_3 - (-4) = 2; v_3 = -2$$

$$v_4 - u_3 = 10; v_4 - (-4) = 10; v_4 =6 $$

$$v_4 - u_2 = 3; 6 - u_2 = 3; u_2 = 3 $$

$$v_4 - u_4 = 5; 6 - u_4 = 5; u_4 = 1 $$

$$v_2 - u_2 = 1; v_2 - 3 = 1; v_2 = 4 $$

Побудуємо оціночну матрицю $ C*{ij}^1 = c*{ij} - (v_j-u_i) $

| $u_i \backslash v_j$ |   2   |   4   |  -2   |   6   |
| :------------------: | :---: | :---: | :---: | :---: |
|          0           | (50)0 |  -1   |  10   |  -2   |
|          3           |   6   | (40)0 |  12   | (30)0 |
|          -4          | (20)0 |  -4   | (60)0 | (10)0 |
|          1           |   2   |   6   |   7   | (60)0 |

Гірший (максимальний по модулю від’ємний) елемент це $c_{22}$. $\Delta_1 = -4$ – ці витрати можна зменшити.
Викреслюємо 3й рядок, потім 1й, 3й та 4й стовпці, а далі 1й, 2й та 4й рядки. Отже додаємо $4$ до елементів 2го стовпцю. Будуємо ланцюжок з елементів опорного плану: $ x*{32}, x*{33}, x*{34}, x*{24}, x*{23}, x*{22} $. Віднімаємо від непарних елементів ланцюжку 30 та додаємо 30 до непарних. Отже отримуємо наступну оціночну матрицю та опорний план.

| $u_i \backslash v_j$ |   2   |   4   |  -2   |   6   |
| :------------------: | :---: | :---: | :---: | :---: |
|          0           | (50)0 |   3   |  10   |  -2   |
|          3           |   6   | (40)0 |  12   | (30)0 |
|          -4          | (20)0 |   0   | (60)0 | (10)0 |
|          1           |   2   |  10   |   7   | (60)0 |
