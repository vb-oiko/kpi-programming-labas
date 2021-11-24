#!/bin/zsh
for i (1 2 3 4 5 6 7 8 9 10);
    time openssl enc -e -rc2-40-cbc -k secret -in "file"$i -out "file_encoded"$i  