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
