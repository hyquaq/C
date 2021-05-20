import os

for i in range(22):
    cmd = "gcc lab4_exercises"+str(i)+".c -o lab4_exercises"+str(i)+".exe"
    os.system(cmd)
