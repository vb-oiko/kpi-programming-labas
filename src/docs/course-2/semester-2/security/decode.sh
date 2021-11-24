#!/bin/zsh
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -d -rc2-40-cbc -k secret -in "file_encoded"$i -out "file_decoded"$i  