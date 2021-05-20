## cấu trúc một chương trình MIPS
khai báo str,...
```
.data
# below
```
hàm **main**
```
.text
.globl main
main:
```
## prints 
### string
```
.data
msg: .asciiz "Hello"

.text
.globl main
main:

li $v0, 4
la $a0, msg
syscall
```
### số
```
.text
.globl main

main:

li $t1, 1508

li $v0, 1
move $a0, $t1
syscall
```
## scanf
```
.text
.globl main
main:

li $v0, 5
syscall
move $s6 , $v0

li $v0, 1
move $a0, $s6
syscall
```
## if 
### so chia het cho 3
```
.text
.globl main

main:
li $v0, 4
la $a0, msg
syscall

li $v0, 5
syscall
move $t1, $v0

li $t0, 3

div $t1, $t0
mfhi $t2

bne $t2, $zero, flase
true:
li $v0, 4
la $a0, msgTrue
syscall
j out
flase:
li $v0, 4
la $a0, msgFlase
syscall
out:

.data
msg: .asciiz "nhap mot so nguyen "
msgTrue: .asciiz "chia het cho 3"
msgFlase: .asciiz "khong chia het cho 3"
```
## vong lap
```
.text
.globl main

main:

li $v0, 4
la $a0, msgFirst
syscall
li $v0, 5
syscall
move $t1, $v0
repeat: bge $t1, $zero, done
li $v0, 4
la $a0, msgSecond
syscall
li $v0, 5
syscall
move $t1, $v0
j repeat
done:

# set i = 1
li $s0, 1

loop: bgt $s0, $t1, out
# if %  == 0
div $t1, $s0
mfhi $t2
# $t2 la so du
bne $t2, $zero, false
true:
# in ra so va xuong dong
li $v0, 1
move $a0, $s0
syscall
li $v0, 4
la $a0, endline
syscall
false:
# i++
addi $s0, $s0, 1
j loop
out:

.data
msgFirst: .asciiz "nhap so N (N>0) = "
msgSecond: .asciiz "nhap lai N (N>0) = "
endline: .asciiz "  "
```
## comment
```
# comment
```

## ma trong mars
