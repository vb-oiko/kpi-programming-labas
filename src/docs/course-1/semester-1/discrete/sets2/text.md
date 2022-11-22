# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Дискретна математика. Алгебра множин. Задача 2. Варіант 2.

Довести тотожність модельним шляхом. 

$$(A \times (C \cup D)) \setminus((A \cup B) \times C) = (A \times D) \setminus ((A \cup B) \times C)
$$

### Розв'язок

Розпишемо належність пари $(x,y)$ лівій частині тотожності:

$$(A \times (C \cup D)) \setminus ((A \cup B) \times C) 
\Leftrightarrow
$$

$$
\Leftrightarrow (x,y) \in (A \times (C \cup D)) \land 
\lnot [(x,y) \in ((A \cup B) \times C)] 
\Leftrightarrow 
$$

$$
\Leftrightarrow (x \in A \land y \in (C \cup D)) \land
\lnot[ x \in (A \cup B) \land y \in C]
\Leftrightarrow 
$$

$$
\Leftrightarrow [x \in A \land (y \in C \lor y \in  D)] \land
[\lnot (x \in (A \cup B) \lor y \notin C]
\Leftrightarrow 
$$

$$
\Leftrightarrow [x \in A \land (y \in C \lor y \in  D)] \land
[\lnot (x \in A \lor x \in  B) \lor y \notin C]
\Leftrightarrow 
$$

$$
\Leftrightarrow [x \in A \land (y \in C \lor y \in  D)] \land
[(x \notin A \land x \notin  B) \lor y \notin C]
\Leftrightarrow 
$$

$$
\Leftrightarrow [x \in A \land (y \in C \lor y \in  D)] \land
[(x \notin A \lor y \notin C)\land ( x \notin  B \lor y \notin C) ]
\Leftrightarrow 
$$


$$
\Leftrightarrow [(x \in A \land y \in C) \lor (x \in A \land  y \in  D)] \land
[(x \notin A \lor y \notin C)\land ( x \notin  B \lor y \notin C) ]
\Leftrightarrow 
$$

$$
\Leftrightarrow [(x \in A \land y \in C) \lor (x \in A \land  y \in  D)] \land
[\lnot (x \in A \land y \in C)\land ( x \notin  B \lor y \notin C) ]
\Leftrightarrow 
$$

$$
\Leftrightarrow ( [(x \in A \land y \in C) \lor (x \in A \land  y \in  D)] \land
\lnot (x \in A \land y \in C) )
\land ( x \notin  B \lor y \notin C) 
\Leftrightarrow 
$$

$$
\Leftrightarrow [(x \in A \land  y \in  D)
\land \lnot (x \in A \land y \in C)] 
\land ( x \notin  B \lor y \notin C) 
\Leftrightarrow 
$$

$$
\Leftrightarrow [(x \in A \land  y \in  D)
\land (x \notin A \lor y \notin C)] 
\land ( x \notin  B \lor y \notin C) 
$$


Розпишемо належність пари $(x,y)$ правій частині тотожності:

$$
(A \times D) \setminus ((A \cup B) \times C)
\Leftrightarrow $$

$$\Leftrightarrow
((x,y) \in (A \times D)) \land 
\lnot ((x,y)\in((A \cup B) \times C))
\Leftrightarrow $$

$$\Leftrightarrow
(x \in A \land y \in D) \land 
\lnot (x \in(A \cup B) \land y \in C)
\Leftrightarrow $$

$$\Leftrightarrow
(x \in A \land y \in D) \land 
\lnot ((x \in A \lor x \in B) \land y \in C)
\Leftrightarrow $$

$$\Leftrightarrow
(x \in A \land y \in D) \land 
(\lnot (x \in A \lor x \in B) \lor y \notin C)
\Leftrightarrow $$

$$\Leftrightarrow
(x \in A \land y \in D) \land 
( (x \notin A \land x \notin B) \lor y \notin C)
\Leftrightarrow $$

$$\Leftrightarrow
(x \in A \land y \in D) \land 
[(x \notin A \lor y \notin C) \land (x \notin B \lor y \notin C)]
\Leftrightarrow $$

$$\Leftrightarrow
[(x \in A \land y \in D) \land (x \notin A \lor y \notin C)] 
\land (x \notin B \lor y \notin C)
$$



Отримані формули тотожні, отже вихідну тотожність доведено.