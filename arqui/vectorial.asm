.text

.globl __start

__start:

la $a0, pt1
la $a1, pt2
lw $t0, tamanio

bucle:
	l.d $f2,($a0)
	l.d $f4,($a1)
	mul.d $f6, $f2, $f4
	add.d $f8, $f8, $f6
	add $a0, $a0, 8
	add $a1, $a1, 8
	add $t0, $t0, -1
	bnez $t0, bucle
	
mov.d $f12, $f8
li $v0, 3
syscall

li $v0, 10
syscall


.data
	pt1: .double 1.0, 2.0, 3.0
	pt2: .double 2.0, 0.0, 1.0
	
	tamanio: .word 3
	
/////////////////////////

.text 

.globl __start

__start:


la $a0, pt1
la $a1, pt2
lw $t0, tamanio
l.d $f2,($a0)
l.d $f4,($a1)
mul.d $f6, $f2, $f4
add.d $f8, $f8, $f6
mov.d $f12, $f8
li $v0, 3
add.d $f6, $f4
syscall
li $v0, 10

syscall

.data

	pt1: .double 1.0, 2.0, 3.0
	pt2: .double 2.0, 0.0, 1.0
	tamanio: .word 3
