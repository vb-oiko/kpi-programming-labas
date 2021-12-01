# Домашня контрольна робота

## Група ІС-02. Бойко Василь Олександрович

### Безпека інформаційних систем. Варіант 80

Алгоритм шифрування 1: rc2-40-cbc
Алгоритм шифрування 2: aria-256-cfb1
Розміри  файлів, Мбайт: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Алгоритм  побудови і довжина ключа RSA, bit: aes256, 1024
Брандмауер: VyOS
Політика безпеки ОС: Linux Mint Debian Edition (LMDE)

### Завдання

1. Побудувати ряд файлів з визначеними розмірами


Створимо командний файл `gen-files.sh`.
```
#!/bin/zsh
for i (1 2 3 4 5 6 7 8 9 10);
    yes "Особисті дані Бойко В.О." | head -c $[$i*1048576] > "file"$i; 
```

Результат виконання файлу.

```
ls -l
total 112664
-rw-r--r--  1 vasyl  staff   1048576 Nov 24 21:26 file1
-rw-r--r--  1 vasyl  staff  10485760 Nov 24 21:26 file10
-rw-r--r--  1 vasyl  staff   2097152 Nov 24 21:26 file2
-rw-r--r--  1 vasyl  staff   3145728 Nov 24 21:26 file3
-rw-r--r--  1 vasyl  staff   4194304 Nov 24 21:26 file4
-rw-r--r--  1 vasyl  staff   5242880 Nov 24 21:26 file5
-rw-r--r--  1 vasyl  staff   6291456 Nov 24 21:26 file6
-rw-r--r--  1 vasyl  staff   7340032 Nov 24 21:26 file7
-rw-r--r--  1 vasyl  staff   8388608 Nov 24 21:26 file8
-rw-r--r--  1 vasyl  staff   9437184 Nov 24 21:26 file9
-rwxrwxrwx  1 vasyl  staff       136 Nov 24 21:26 gen-file.sh
```

1. Шифрувати через openssl
Шифрувати через openssl створені файли, визначивши час шифрування (в області ядра, в області користувача). Підрахувати сумарний час виконання процесу шифрування.

Створимо командний файл `encode.sh`.

```
#!/bin/zsh
echo ------------------
echo rc2-40-cbc
echo ------------------
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  
    
echo ------------------
echo aria-256-cfb1
echo ------------------

for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out "file_aria_encoded"$i  
```

Результат виконання файлу.

```
------------------
rc2-40-cbc
------------------
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,02s user 0,02s system 45% cpu 0,087 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,05s user 0,03s system 56% cpu 0,134 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,08s user 0,02s system 61% cpu 0,165 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,09s user 0,05s system 64% cpu 0,217 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,13s user 0,05s system 66% cpu 0,260 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,15s user 0,05s system 69% cpu 0,289 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,16s user 0,07s system 70% cpu 0,322 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,19s user 0,06s system 70% cpu 0,360 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,21s user 0,07s system 72% cpu 0,390 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_rc2_encoded"$i  0,19s user 0,13s system 73% cpu 0,424 total
------------------
aria-256-cfb1
------------------
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   1,18s user 0,05s system 95% cpu 1,290 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   2,30s user 0,09s system 96% cpu 2,479 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   3,51s user 0,13s system 96% cpu 3,760 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   4,46s user 0,23s system 97% cpu 4,821 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   5,60s user 0,31s system 96% cpu 6,104 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   6,97s user 0,36s system 97% cpu 7,548 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   7,95s user 0,30s system 97% cpu 8,497 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   9,05s user 0,36s system 97% cpu 9,675 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   10,22s user 0,41s system 97% cpu 10,921 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -e -aria-256-cfb1 -k secret -in "file"$i -out   11,46s user 0,41s system 97% cpu 12,204 total


```

3. Дешифрувати зашифровані дані
Дешифрувати зашифровані дані, визначивши час шифрування (в області користувача, ядра).

Створимо командний файл `decode.sh`.

```
#!/bin/zsh

echo ------------------
echo rc2-40-cbc
echo ------------------
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out "file_rc2_decoded"$i  

    
echo ------------------
echo aria-256-cfb1
echo ------------------
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out "file_aria_decoded"$i   
```

Результат виконання файлу.

```
./decode.sh    
------------------
rc2-40-cbc
------------------
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,02s user 0,01s system 45% cpu 0,061 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,04s user 0,01s system 53% cpu 0,096 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,04s user 0,02s system 53% cpu 0,125 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,05s user 0,02s system 58% cpu 0,125 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,07s user 0,02s system 59% cpu 0,152 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,08s user 0,05s system 55% cpu 0,224 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,11s user 0,02s system 55% cpu 0,241 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,11s user 0,04s system 55% cpu 0,273 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,16s user 0,03s system 57% cpu 0,330 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -rc2-40-cbc -k secret -in "file_rc2_encoded"$i -out   0,14s user 0,06s system 56% cpu 0,349 total
------------------
aria-256-cfb1
------------------
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   1,25s user 0,02s system 96% cpu 1,316 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   2,62s user 0,05s system 95% cpu 2,813 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   4,17s user 0,09s system 96% cpu 4,437 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   5,16s user 0,12s system 96% cpu 5,470 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   5,99s user 0,25s system 96% cpu 6,458 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   6,82s user 0,25s system 97% cpu 7,242 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   8,05s user 0,25s system 97% cpu 8,514 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   9,44s user 0,25s system 97% cpu 9,927 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   10,34s user 0,32s system 97% cpu 10,962 total
*** WARNING : deprecated key derivation used.
Using -iter or -pbkdf2 would be better.
openssl enc -d -aria-256-cfb1 -k secret -in "file_aria_encoded"$i -out   11,55s user 0,34s system 97% cpu 12,228 total
```

4. Описати основні характеристики алгоритмів шифрування
Описати основні характеристики алгоритмів шифрування (довжина ключів, довжини блоків, режими - CBC, ECB, OFB, CFB, ede, des3 тощо, час створення алгоритму тощо)

Алгоритм шифрування rc2-40-cbc
- довжина ключа: 40 біт
- довжини блоку: 64 біт
- режим: CBC
- час створення алгоритму: 1987

Алгоритм шифрування aria-256-cfb1
- довжина ключа: 256 біт
- довжини блоку: 128 біт
- режим: CFB
- час створення алгоритму: 2004

5. Створити секретний ключ і публічний ключ
Створити секретний ключ і публічний ключ асиметричного алгоритму шифрування.

```
openssl genrsa -aes256 -out fd.pem 1024
```

```
openssl rsa -in fd.pem -pubout -out fd-public.pem
```

6. Вивести ключі на екран

```
cat fd.pem
-----BEGIN RSA PRIVATE KEY-----
Proc-Type: 4,ENCRYPTED
DEK-Info: AES-256-CBC,CEEC81062330A3A5E7E0E846736D28D5

x/0fjZ5frBz/NlM9MNV+HfFARsCKt+Ktr4UwRkERy1Le417hXo8PjNuAAmzjAcI3
uQvRx7OAETTWSMbZjuHbG8OwxlREknS/e0SY7VvM4/rTuvOBcYu6UEkNh/IKCv/k
jmwvnYi0vR3srFZlxLjhE73sz22fsWjVl+cfRaMIHZn+CF+WMkqsxpsnpaiOvNZA
jlm2J3tY6zkoAL/jHazpq1a7ML5qI3+AnYSf0+5Z9Levo4N2rv6UDzW+U7frNE28
/A6CbtJC12YIWp0ANNYt579SfcgVKx891YkuSD+Iw7XDZf2YXvQnFR/9sdbWfY+h
W/nVjvAkH7lYstXSafk4DKJUN02qd+C8d6I7aSjc5nO/9l0UhoLhuE5iyeSM498Y
u+IIDC6DOsSu/iy0hQb5wPnjv0ReS29ht0vXsGloLiCseDB83YVnaJkMvrz6vawy
apNm+K5Ey4b95Q1/W77iF3I4dWga3Uw4LirCcT+peBR5PfUjM1BgsiH42UgtSua+
RWCCQhVkedriirFhq1bvibK9mGEGPAgmthWaR+YyKGD7yNV74174/r1+Bjc7i13o
ODOLV1Sqy3fVbND3T/wwVZdDABI2k7Le/SRQ4TvDK4RqxcVKEwv3ddgNdTrjGFm8
Tq3w5Vd8MFAWo6+68ADzQRtOslwpiM87ADJ9h52MfCGL76XtcE6nbsMoPrQqycBR
1Peb29IavcfepjWq+Us1Ctc/9p74URetiq+hWPKGEvpNKQylKG2/AEFDpqUw4uPC
qDnadl80aVpyEMIi6L5lJVRxCOvJPaTieuRisOfzMZmd+IBAP1Yag99WtBR1rXFR
-----END RSA PRIVATE KEY-----
```

```
cat fd-public.pem
-----BEGIN PUBLIC KEY-----
MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDfVl0GnCBCd7t7EKooP0/2QDEn
X6FzlVfemwQRUvz/jZZxt53N5wQsa+l1UtzdqRHsHP1JDi8s5sHslchXw+DP1SRK
zpxhppbHHP+pegwOjTxOOWOK8lCm2c1aDWBYQ0z0ZGXduQOaL2oSOCknZgdEJsyr
AU20IOcMP7s0AkU75wIDAQAB
-----END PUBLIC KEY-----
```

7. Зашифрувати у файлі власні дані
Зашифрувати у файлі власні дані (прізвище, група, інститут, університет тощо) публічним ключем.

Створимо командний файл `pem-encode.sh`.

```
#!/bin/zsh
openssl rsautl -in $1 -inkey fd-public.pem -pubin -encrypt -out $1.cr
```

8. Дешифрувати зашифровані дані
Дешифрувати зашифровані дані секретним ключем.

Створимо командний файл `pem-decode.sh`.

```
#!/bin/zsh
openssl rsautl -in $1.cr -inkey fd.pem -out $1.dcr -decrypt
```

Створимо файл з даними `data`.

Запустимо спочатку файл `./pem-encode.sh data`, а потім командний файл `pem-decode.sh data`.
Потім за допомогою команди  порівняємо початковий та дешифрований файли.

```
diff data data.dcr -s
Files data and data.dcr are identical
```

Отже, як бачимо файли є ідентичними.

9. Зробити висновки і оформити Домашню контрольну роботу
Зробити висновки щодо продуктивності алгоритму шифрування ( за часом шифрування і дешифрування) за даними шифрування і дешифрування (в області користувача, ядра, загальний час).

Зведемо дані, отриманні при вимірюванні часи, витраченого на шифрування та дешифрування файлів різного розміру за допомогою двох алгоритмів у таблиці.

### Шифрування за допомогою rc2-40-cbc

| file size | user  | system | cpu | total |
| --------- | ----- | ------ | --- | ----- |
| 1Mb       | 0,02s | 0,02s  | 45% | 0,087 |
| 2Mb       | 0,05s | 0,03s  | 56% | 0,134 |
| 3Mb       | 0,08s | 0,02s  | 61% | 0,165 |
| 4Mb       | 0,09s | 0,05s  | 64% | 0,217 |
| 5Mb       | 0,13s | 0,05s  | 66% | 0,260 |
| 6Mb       | 0,15s | 0,05s  | 69% | 0,289 |
| 7Mb       | 0,16s | 0,07s  | 70% | 0,322 |
| 8Mb       | 0,19s | 0,06s  | 70% | 0,360 |
| 9Mb       | 0,21s | 0,07s  | 72% | 0,390 |
| 10Mb      | 0,19s | 0,13s  | 73% | 0,424 |

### Шифрування за допомогою aria-256-cfb1

| file size | user   | system | cpu | total  |
| --------- | ------ | ------ | --- | ------ |
| 1Mb       | 1,18s  | 0,05s  | 95% | 1,290  |
| 2Mb       | 2,30s  | 0,09s  | 96% | 2,479  |
| 3Mb       | 3,51s  | 0,13s  | 96% | 3,760  |
| 4Mb       | 4,46s  | 0,23s  | 97% | 4,821  |
| 5Mb       | 5,60s  | 0,31s  | 96% | 6,104  |
| 6Mb       | 6,97s  | 0,36s  | 97% | 7,548  |
| 7Mb       | 7,95s  | 0,30s  | 97% | 8,497  |
| 8Mb       | 9,05s  | 0,36s  | 97% | 9,675  |
| 9Mb       | 10,22s | 0,41s  | 97% | 10,921 |
| 10Mb      | 11,46s | 0,41s  | 97% | 12,204 |

### Дешифрування за допомогою rc2-40-cbc

| file size | user  | system | cpu | total |
| --------- | ----- | ------ | --- | ----- |
| 1Mb       | 0,02s | 0,01s  | 45% | 0,061 |
| 2Mb       | 0,04s | 0,01s  | 53% | 0,096 |
| 3Mb       | 0,04s | 0,02s  | 53% | 0,125 |
| 4Mb       | 0,05s | 0,02s  | 58% | 0,125 |
| 5Mb       | 0,07s | 0,02s  | 59% | 0,152 |
| 6Mb       | 0,08s | 0,05s  | 55% | 0,224 |
| 7Mb       | 0,11s | 0,02s  | 55% | 0,241 |
| 8Mb       | 0,11s | 0,04s  | 55% | 0,273 |
| 9Mb       | 0,16s | 0,03s  | 57% | 0,330 |
| 10Mb      | 0,14s | 0,06s  | 56% | 0,349 |

### Дешифрування за допомогою aria-256-cfb1

| file size | user   | system | cpu | total  |
| --------- | ------ | ------ | --- | ------ |
| 1Mb       | 1,25s  | 0,02s  | 96% | 1,316  |
| 2Mb       | 2,62s  | 0,05s  | 95% | 2,813  |
| 3Mb       | 4,17s  | 0,09s  | 96% | 4,437  |
| 4Mb       | 5,16s  | 0,12s  | 96% | 5,470  |
| 5Mb       | 5,99s  | 0,25s  | 96% | 6,458  |
| 6Mb       | 6,82s  | 0,25s  | 97% | 7,242  |
| 7Mb       | 8,05s  | 0,25s  | 97% | 8,514  |
| 8Mb       | 9,44s  | 0,25s  | 97% | 9,927  |
| 9Mb       | 10,34s | 0,32s  | 97% | 10,962 |
| 10Mb      | 11,55s | 0,34s  | 97% | 12,228 |

Отже ми можемо побачити наступне:
- існує приблизно лінійна залежність між розміром файлу, що шифрується або дешифрується, та часом витраченим на цю операцію;
- алгоритм rc2-40-cbc виконується більш швидко ніж алгоритм aria-256-cfb1 як при шифруванні, так і при дешифруванні;
- операція шифрування виконується довше ніж операція дешифрування

10. Надати відповіді на питання

1. Пояснити основні режими шифрування і дешифрування даних на основі типових програмних засобів
- ECB - Електронна книга кодів. Повідомлення розбивається на блоки і кожен блок шифрується окремо
- CBC - Ланцюгування шифроблоків. Кожен блок відкритого тексту XOR-ять з попереднім шифроблоком перед шифруванням. Так, кожен шифроблок, залежить від усіх блоків оброблених до нього. Для отримання унікальних повідомлень потрібно використовувати ініціалізаційний вектор у першому блоці.
- CFB - Зворотний зв'язок по шифротексту. Перетворює блоковий шифр на потоковий, що самосинхронізується. Розшифрування CFB майже тотожне до шифрування CBC виконаного навпаки.
- OFB - Зворотний зв'язок по виходу. Утворює з блокового шифру синхронний потоковий шифр. Він утворює потік ключа, який потім XOR-иться з блоками відкритого тексту для утворення шифротескту.
- CTR - Лічильник. Режим лічильника перетворює блоковий шифр в потоковий шифр. Він породжує наступний блок потоку ключа шифруванням послідовних значень «лічильника». Лічильник може бути будь-якою функцією, що видає послідовність, яка гарантовано не повторюється впродовж тривалого часу.

2. Як задати ключ у даному алгоритмі шифрування?
Ключ задається за допомогою відповідної опції команди шифрування
`enc -ciphername [-K key]`

3. Пояснити призначення і значення опцій заданого алгоритму шифрування
Алгоритм шифрування `rc2-40-cbc`
- `rc2` це назва шифру
- `40` це довжина ключа у бітах
- `CBC` це режим шифрування

Алгоритм шифрування `aria-256-cfb1`
- `aria` це назва шифру
- `256` це довжина ключа у бітах
- `cfb1` це режим шифрування

4. В чому полягає реалізація політик безпеки з використанням операційних систем?
Сучасні операційні системи мають вбудовані технології для забезпечення інформаційної безпеки, а саме:
- використання захищених VPN;
- використання криптографічних перетворень даних; 
- застосування міжмережевих екранів;
- керування доступом на рівні користувачів;
- підтримка інфраструктури керування відкритими ключами PKI;
- захист інформації на файловому рівні (шифрування файлів і каталогів);
- захист від вірусів з використанням спеціальних антивірусних комплексів; 
- технології виявлення вторгнень (Intrusion Detection) і активне дослідження захищеності інформаційних ресурсів; 
- централізоване керування засобами інформаційної безпеки

5. Визначити основні програмні засоби openssl
openssl включає наступні програмні засоби:
- симетричне шифрування
- криптографія з відкритим ключем, 
- узгодження ключів, 
- робота з сертифікатами, 
- криптографічні хеш-функції, 
- криптографічні генератори псевдовипадкових чисел
- коди аутентифікації повідомлень (MAC), 
- функції отримання ключів (KDF) та різні 
- інші утиліти.

11. Описати особливості політик безпеки операційної системи
Політика безпеки ОС: Linux Mint Debian Edition (LMDE)

Операційна система Linux Mint Debian Edition (LMDE) побудована на базі Debian, а Debian у свою чергу побудована на ядрі GNU/Linux. Отже політики безпеки операційної системи LMDE базуються на політиках безпеки операційної системи GNU/Linux.
Операційна система GNU/Linux дозволяє запровадити наступні заходи політик безпеки:

- використання пароля для завантажувача ОС. Також доцільно вимкнути можливість завантаження зі знімних пристроїв у BIOS комп'ютера, а потім також захистити сам BIOS паролем. Також слід мати на увазі, що файли конфігурації завантажувача потрібно захистити, змінивши їх режим на 600 (читання/запис лише для root), інакше інші користувачі зможуть прочитати паролі або хеші.
- використання сценаріїв, які можуть підтвердити виконання дій або процедур безпеки. 
- функція автоматичного виходу. Це може бути сценарій, який виконується кожні 10 хвилин і перевіряє як віддалені, так і локальні термінали на неактивність і припиняє їх, якщо час простою перевищено.
- використання утиліти, яка перезаписує жорсткі диски, файли та інші пристрої повторюваними шаблонами, призначеними для ускладнень відновлення даних з цих пристроїв.
- використання резервного копіювання. Якщо система буде зламана, резервні копії можна використовувати для відновлення попереднього стану системи. Коли трапляються помилки або нещасні випадки, резервні копії також можна використовувати для порівняння поточної системи із старою версією. 
- використання розділів дисків. Сервери повинні мати окремі файлові системи принаймні для /, /boot, /usr, /var, /tmp і /home. Наприклад, щоб запобігти заповнення кореневого розділу журналюванням. Додатки сторонніх розробників також мають бути в окремих файлових системах, наприклад, у /opt.
- використання брандмауеру (налаштування iptables).
- використання функцій безпеки ядра ОС (увімкнення захисту від файлів cookie TCP SYN, вимкнення маршрутизації IP джерел, вимкнення прийняття ICMP Redirect та інших)
- 


1.  Описати характеристики і особливості адміністрування на основі заданого брандмауера.
Брандмауер: VyOS

Брандмауер VyOS має наступні властивості:
- підтримка протоколів маршрутизації: BGP (IPv4 та IPv6), OSPF (v2 and v3), RIP та RIPng, маршрутизація на основі політик;
- підтримка протоколів VPN: IPsec, VTI, VXLAN, L2TPv3, L2TP/IPsec та PPTP сервери, тунельні інтерфейси (GRE, IPIP, SIT), OpenVPN в режимі клієнта, сервера чи у режимі "сайт-сайт", WireGuard;
- підтримка брандмауерів з визначенням стану, брандмауерів на основі зон, усіх типів вихідного та цільового NAT (один до одного, один до багатьох, багато до багатьох);
- підтримка мережевих сервісів: DСервер і ретранслятор DHCP і DHCPv6, IPv6 RA, переадресація DNS, сервер TFTP, веб-проксі, концентратор доступу PPPoE, датчик NetFlow/sFlow, QoS;
- забезпечення високої доступності завдяки VRRP для IPv4 та IPv6, можливості виконувати спеціальні перевірки працездатності та сценарії переходу, ECMP, балансуванню навантаження з урахуванням стану.
- вбудоване версіонування та архівування роблять зовнішні інструменти резервного копіювання конфігурації зайвими;
- повністю відкритий вихідний код: уся кодова база та набір інструментів для створення доступні кожному для аудиту, створення індивідуальних зображень і внеску.

Брандмауер VyOS поєднує операційну систему GNU/Linux і багато безкоштовного мережевого програмного забезпечення в єдиному уніфікованому інтерфейсі керування. Він надає інтерфейс командного рядка в стилі апаратних маршрутизаторів, а також HTTP API і бібліотеки для сценаріїв налаштування.

Брандмауер VyOS готовий до віртуалізації та хмарних сервісів. На додаток до апаратних серверів x86-64, VyOS працює на кількох платформах віртуалізації, включаючи, але не обмежуючись KVM, Xen, Citrix XenServer, VirtualBox, VMware та Microsoft Hyper-V, з паравіртуальними драйверами для всіх цих платформ.