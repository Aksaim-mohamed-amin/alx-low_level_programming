#!/bin/bash

gcc *.c -Wall -c -fPIC
gcc *.o -shared -o liball.so
rm *.o
