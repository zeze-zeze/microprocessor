	.syntax unified
	.cpu cortex-m4
	.thumb
.text
.global main
	.equ N, 100
fib:
	// jump to exceedN if N < 1 or N > 100
	cmp r0, 1
	blt exceedN
	cmp r0, 100
	bgt exceedN
	// fibonacci start
	movs r1, 1
	movs r2, 1
	cmp r0, 2
	ble N_1_2
	loop:
		adds r3, r1, r2
		cmp r3, r2
		blt overflow
		movs r1, r2
		movs r2, r3
		subs r0, r0, 1
		cmp r0, 2
		bne loop
	movs r4, r2
	b endfib
N_1_2:
	movs r4, 1
	b endfib
exceedN:
	movs r4, -1
	b endfib
overflow:
	movs r4, -2
	b endfib
endfib:
	bx lr
main:
	movs R0, #N
	bl fib
L: b L
