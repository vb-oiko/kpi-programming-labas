# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Дискретна математика. Алгебра множин. Задача 1. Варіант 2.

Довести тотожність аксиоматично. 

Операції $\setminus$ та $\bigtriangleup$ розкрити за формулами $A \setminus B = A \cap B^c$ та $A \bigtriangleup B =( A \cap B^c) \cup( B \cap A^c)$

$$A \cap (A \setminus(A \bigtriangleup ( A \bigtriangleup B))) = A \setminus B
$$

### Розв'язок

Нехай $C=A \bigtriangleup B =( A \cap B^c) \cup( B \cap A^c)$, тоді:

$$A \bigtriangleup ( A \bigtriangleup B) = ( A \cap C^c) \cup( C \cap A^c)
$$

Обчислимо окремо $C^c$, $A \cap C^c$ та $C \cap A^c$:

$$C^c =(( A \cap B^c) \cup( B \cap A^c)^c)
=( A \cap B^c)^c \cap( B \cap A^c)^c 
=(A^c \cup B )\cap( B^c \cup A) 
$$

$$A \cap C^c
= A \cap( (A^c \cup B )\cap( B^c \cup A) )
= A \cap (A^c \cup B )\cap( B^c \cup A) 
=$$
$$
= ((A \cap A^c )\cup ( A \cap  B ))\cap( B^c \cup A) 
= (\oslash \cup ( A \cap  B ))\cap( B^c \cup A) 
=$$
$$
= ( A \cap  B )\cap( B^c \cup A) 
=  A \cap  B \cap( B^c \cup A) 
=  A \cap ( (B \cap B^c) \cup (B \cap A) )
=$$
$$
= A \cap ( \oslash \cup (B \cap A) )
= A \cap  B \cap A = A \cap  B
$$

$$ C \cap A^c 
= (( A \cap B^c) \cup( B \cap A^c)) \cap A^c
= ( A \cap B^c \cap A^c) \cup( B \cap A^c \cap A^c)
$$

$$
= ( \oslash \cap B^c ) \cup( B \cap A^c )
=  \oslash \cup( B \cap A^c )
=   B \cap A^c 
$$

Тепер підставимо обчислені значення $A \cap C^c$ та $C \cap A^c$ та обчислимо значення $A \bigtriangleup ( A \bigtriangleup B)$:

$$A \bigtriangleup ( A \bigtriangleup B) 
= ( A \cap C^c) \cup( C \cap A^c)
= ( A \cap B) \cup( B \cap A^c)
= B \cap ( A  \cup  A^c)
= B
$$

Тепер підставимо обчислене значення $A \bigtriangleup ( A \bigtriangleup B)$ у початкову формулу:

$$A \cap (A \setminus(A \bigtriangleup ( A \bigtriangleup B)))
=A \cap (A \setminus B)
=$$

$$
=A \cap (A \setminus B)
=A \cap (A \cap B^c)
=A \cap B^c
=A \setminus B
$$