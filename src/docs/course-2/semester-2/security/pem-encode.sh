#!/bin/zsh
openssl rsautl -in $1 -inkey fd-public.pem -pubin -encrypt -out $1.cr