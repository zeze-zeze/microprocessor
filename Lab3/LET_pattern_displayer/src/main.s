	.syntax unified
	.cpu cortex-m4
	.thumb
.data
	leds: .byte 0
.text
	.global main
	.equ RCC_AHB2ENR, 0x4002104C
	.equ GPIOB_MODER, 0x48000400
	.equ GPIOB_OTYPER, 0x48000404
	.equ GPIOB_OSPEEDR, 0x48000408
	.equ GPIOB_PUPDR, 0x4800040C
	.equ GPIOB_ODR, 0x48000414
	.equ time, 4000000
main:
	bl GPIO_init
	bl Delay
	// set the current leds condition
	movs r1, 0b00001100
	ldr r0, =leds
	str r1, [r0]
	// r8 for direction, to left is 1, to right is 0
	movs r8, 1

	B Loop
GPIO_init:
	//TODO: Initial LED GPIO pins as output
	// Enable AHB2 clock to control GPIOB(2)
	movs r0, 2
	ldr r1, =RCC_AHB2ENR
	str r0, [r1]
	// set PB3, PB4, PB5, PB6 to output mode(1)
	movs r0, 0b01010101000000
	ldr r1, =GPIOB_MODER
	str r0, [r1]
	// set PB3, PB4, PB5, PB6 to high speed mode
	movs r0, 0b10101010000000
	ldr r1, =GPIOB_OSPEEDR
	str r0, [r1]
	// set the initial light right bulb
	ldr r0, =GPIOB_ODR
	movs r1, 0b11110111
	str r1, [r0]
	bx lr
Loop:
	//TODO: Write the display pattern into leds variable
	bl DisplayLED
	bl Delay
	b Loop
DisplayLED:
	//TODO: Display LED by leds
	// use direc to determine left or right
	ldr r0, =leds
	ldr r2, [r0]
	ldr r1, =GPIOB_ODR
	cmp r8, 0
	beq Right
	Left:
		lsl r2, 1
		str r2, [r0]
		eor r4, r2, 0b11111111
		str r4, [r1]
		// see wether to change direction by looking if the 8th bit is 1
		movs r3, 0b10000000
		and r3, r2, r3
		cmp r3, 0b10000000
		beq Switch
		bx lr
	Right:
		// shift right and
		lsr r2, 1
		str r2, [r0]
		eor r4, r2, 0b11111111
		str r4, [r1]
		// see whether to change direction by looking if the 2nd bit is 1
		movs r3, 0b100
		and r3, r2, r3
		cmp r3, 0b100
		beq Switch
		bx lr
	Switch:
		eor r8, r8, 1
		bx lr
Delay:
	//TODO: Write a delay 1 sec function
	// set the initial value of the counter of the loop
	ldr r0, =#time
	Delay_loop:
		// 1 + 1 + 3 = 5
		subs r0, r0, 5
		cmp r0, 0
		bge Delay_loop
	bx lr
