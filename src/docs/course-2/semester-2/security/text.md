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
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  
```

Результат виконання файлу.

```
./encode.sh
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.02s user 0.01s system 92% cpu 0.035 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.04s user 0.01s system 95% cpu 0.056 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.05s user 0.01s system 96% cpu 0.066 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.07s user 0.01s system 97% cpu 0.086 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.09s user 0.02s system 98% cpu 0.106 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.10s user 0.02s system 98% cpu 0.125 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.13s user 0.02s system 98% cpu 0.151 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.16s user 0.03s system 98% cpu 0.189 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.15s user 0.03s system 99% cpu 0.183 total
openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  0.18s user 0.03s system 98% cpu 0.215 total
```

3. Дешифрувати зашифровані дані
Дешифрувати зашифровані дані, визначивши час шифрування (в області користувача, ядра).

Створимо командний файл `decode.sh`.

```
#!/bin/zsh
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out "file_decoded"$i  
```

Результат виконання файлу.

```
./decode.sh
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.01s user 0.01s system 90% cpu 0.022 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.03s user 0.01s system 93% cpu 0.038 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.04s user 0.01s system 95% cpu 0.051 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.04s user 0.01s system 96% cpu 0.054 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.05s user 0.02s system 96% cpu 0.066 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.06s user 0.02s system 97% cpu 0.080 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.07s user 0.02s system 97% cpu 0.091 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.08s user 0.02s system 97% cpu 0.104 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.09s user 0.03s system 98% cpu 0.121 total
openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out   0.13s user 0.04s system 98% cpu 0.171 total

```

4. Описати основні характеристики алгоритмів шифрування
Описати основні характеристики алгоритмів шифрування (довжина ключів, довжини блоків, режими – CBC, ECB, OFB, CFB, ede, des3 тощо, час створення алгоритму тощо)
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


1. Зробити висновки і оформити Домашню контрольну роботу
Зробити висновки щодо продуктивності алгоритму шифрування ( за часом шифрування і дешифрування) за даними шифрування і дешифрування (в області користувача, ядра, загальний час).
10. Надати відповіді на питання
Бальні оцінки
11. Описати особливості політик безпеки операційної системи
12. Описати характеристики і особливості адміністрування на основі заданого брандмауера.
