#!/bin/bash
#У поточному каталозі створити дерево підкаталогів:
# арг4(/ арг2/ арг5)(/ арг3/apr6)(/ арг1)
mkdir ~/boyko
cd ~/boyko
cat  > script.sh

mkdir -p $4/$2/$5 $4/$3/$6 $4/$1
cd $4
ls -l /bin > $7.txt

chmod u+x script.sh
bash script.sh arg1 arg2 arg3 arg4 arg5 arg6 file-arg7

