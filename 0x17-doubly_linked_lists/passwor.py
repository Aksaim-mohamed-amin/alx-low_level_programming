#!/usr/bin/python3
import os

ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]

file = open("100-password", "w")
file.write(ok)
file.close()

print("Password Printed to the file name 100-password")
