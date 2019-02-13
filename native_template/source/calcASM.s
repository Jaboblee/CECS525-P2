	.section ".text"
	.global add	
add:
	ldr	r2, [r0]
	ldr	r3, [r1]
	add	r3, r2, r3
	str	r3, [r1]
	mov	r3, #0
	str	r3, [r0]
	bx	lr
	
	.global sub
sub:
	ldr	r2, [r0]
	ldr	r3, [r1]
	sub	r3, r2, r3
	str	r3, [r1]
	mov	r3, #0
	str	r3, [r0]
	bx	lr
	
	.global mul
mul:
	ldr	r2, [r0]
	ldr	r3, [r1]
	mul	r3, r2, r3	
	str	r3, [r1]
	mov	r3, #0
	str	r3, [r0]
	bx	lr

	.global Jdiv
Jdiv:
	push	{fp,lr}
	push	{r0,r1}
	ldr	r0, [r0]
	ldr	r1, [r1]
	bl	__aeabi_idiv
	mov	r3, r0
	ldmia	sp, {r0,r1}
	push	{r3}
	ldr	r0, [r0]
	ldr	r1, [r1]
	bl	__aeabi_idivmod
	mov	r2, r1
	pop	{r3}
	pop	{r0,r1}
	str	r3, [r1]
	str	r2, [r0]
	pop	{fp,pc}
	bx	lr
	.end
