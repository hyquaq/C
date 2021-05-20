import os
for i in range(1, 12):
    os.system(f'gcc lab5_exercises{i}.c -o lab5_exercises{i}.exe')
    # print(f'gcc .\lab5_exercises{i}.c -o .\lab5_exercises{i}.c')
