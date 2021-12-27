### Задача 4. Варіант 1 

Довести, що для нечітких множин $A$, $B$, і $C$ з функціями приналежності $\mu_A(x)$, $\mu_B(x)$, і $\mu_C(x)$ виконується наступне:

а) $ (A \cap B) \cap C = A \cap (B \cap C) $

б) $ \overline{A \widehat{\cap} B} = \overline{A} \widehat{+} \overline{B} $, где $ \mu_{A \widehat{+} B} = \mu_A(x) + \mu_B(x) - \mu_A(x) \mu_B(x) $

### Розв'язок

#### Частина 1

$$ \mu_{(A \cap B) \cap C}(x) = \min\{ \mu_{A \cap B }(x);  \mu_{C}(x)\} = 
\min \{ \min\{\mu_{A}(x);  \mu_{B}(x)\};  \mu_{C}(x)\}  = 
\min \{ \mu_{A}(x);  \mu_{B}(x);  \mu_{C}(x)\} 
$$

$$ \mu_{A \cap (B \cap C)}(x) = \min\{ \mu_{A}(x); \mu_{B \cap C }(x)\} = 
\min \{ \mu_{A}(x); \min\{\mu_{B}(x);  \mu_{C}(x)\}\}  = 
\min \{ \mu_{A}(x);  \mu_{B}(x);  \mu_{C}(x)\} 
$$


#### Частина 2

$$ \mu_{\overline{A \widehat{\cap} B}}(x) = 1 - \mu_{A \widehat{\cap} B}(x) =  1 - \mu_A(x) \mu_B(x) $$

$$ \mu_{\overline{A} \widehat{+} \overline{B}} = \mu_{\overline{A}}(x) + \mu_{\overline{B}}(x) - \mu_{\overline{A}}(x) \mu_{\overline{B}}(x) = $$

$$ = 1 - \mu_A(x) + 1 - \mu_B(x) -  (1 - \mu_A(x))  (1 - \mu_B(x)) = $$

$$ = 1 - \mu_A(x) + 1 - \mu_B(x) -  (1 - \mu_A(x) - \mu_B(x) + \mu_A(x) \mu_B(x)) = $$

$$ = 1 - \mu_A(x) + 1 - \mu_B(x) -  1 + \mu_A(x) + \mu_B(x) - \mu_A(x) \mu_B(x) = $$

$$ = 1 - \mu_A(x) \mu_B(x)$$