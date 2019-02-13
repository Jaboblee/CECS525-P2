.globl addition
.globl subtraction
.globl multiplication
.globl division
.globl remainder

addition:
			.fnstart
			add r0, r0, r1
			bx lr
			.fnend
			
			
subtraction:
			.fnstart
			sub r0, r0, r1
			bx lr
			.fnend
			
			
multiplication:
			.fnstart
			mul r0, r0, r1
			bx lr
			.fnend	

			
division:
			.fnstart
			mul r5, r0, r1
			cmp r5, #0
			movlt r6, #32
			cmp r0, #0
			neglt r0, r0
			cmp r1, #0
			neglt r1, r1
			mov r5, #0
			mov r4, r0
check1:		cmp r4, r1
			blt check2
			sub r4, r4, r1
			add r5, #1
			bal check1
check2:		cmp r6, #32
			negeq r5, r5
			mov r0, r5
			bx lr
			.fnend
			
			
remainder:
			.fnstart
			cmp r0, #0
			neglt r0, r0
			cmp r1, #0
			neglt r1, r1
			mov r4, r0
check3:		cmp r4, r1
			blt check4
			sub r4, r4, r1
			bal check3
check4:		mov r0, r4
			bx lr
			.fnend			