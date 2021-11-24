#!/bin/zsh
openssl rsautl -in $1.cr -inkey fd.pem -out $1.dcr -decrypt
