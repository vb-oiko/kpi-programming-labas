# Розрахункова робота

## Група ІС-02. Бойко Василь Олександрович

### Дискретна математика. Алгебра множин. Задача 2. Варіант 2.

Довести тотожність модельним шляхом. 

$$(A \times (C \cup D)) \setminus((A \cup B) \times C) = (A \times D) \setminus ((A \cup B) \times C)
$$

### Розв'язок

Розпишемо належність пари $(x,y)$ лівій частині тотожності:

$$(A \times (C \cup D)) \setminus((A \cup B) \times C) 
= (A \times (C \cup D)) \cap ((A \cup B) \times C)^c
\Leftrightarrow
$$

$$
\Leftrightarrow (x \in A \land y \in (C \cup D)) \land (x \notin (A \cup B) \land y \notin C)
\Leftrightarrow 
$$

$$\Leftrightarrow 
x \in A \land x \notin (A \cup B) 
\land y \in (C \cup D)  \land y \notin C
\Leftrightarrow $$

$$\Leftrightarrow 
(x \in A) \land (x \notin A \lor x \notin  B) 
\land 
(y \in C \lor y \in D)  \land y \notin C
\Leftrightarrow $$

$$\Leftrightarrow 
((x \in A \land x \notin A )\lor (x \in A \land  x \notin  B) )
\land 
((y \in C  \land y \notin C )\lor (y \in D \land y \notin C))
\Leftrightarrow $$

$$\Leftrightarrow 
x \in A \land  x \notin  B
\land 
y \in D \land y \notin C
$$

Розпишемо належність пари $(x,y)$ правій частині тотожності:

$$
(A \times D) \setminus ((A \cup B) \times C)
\Leftrightarrow $$

$$\Leftrightarrow
(x \in A \land y\in D) \land (x \notin(A \cup B) \land y\notin C)
\Leftrightarrow $$

$$\Leftrightarrow
x \in A \land y\in D \land (x \notin A \lor x \notin  B) \land y\notin C
\Leftrightarrow $$

$$\Leftrightarrow
x \in A \land y\in D \land ((x \notin A \land y\notin C) \lor (x \notin  B \land y\notin C)) 
\Leftrightarrow $$

$$\Leftrightarrow
y\in D \land ((x \in A \land x \notin A \land y\notin C) \lor (x \in A \land x \notin  B \land y\notin C)) 
\Leftrightarrow $$

$$\Leftrightarrow
y\in D \land x \in A \land x \notin  B \land y\notin C
$$

Отримані формули тотожні, отже вихідну тотожність доведено.