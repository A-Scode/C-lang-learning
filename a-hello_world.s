	.file	"hello_world.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "this is before main starts\0"
	.text
	.globl	start_fun
	.def	start_fun;	.scl	2;	.type	32;	.endef
	.seh_proc	start_fun
start_fun:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "this is after main ends\0"
	.text
	.globl	end_fun
	.def	end_fun;	.scl	2;	.type	32;	.endef
	.seh_proc	end_fun
end_fun:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "hello\0"
	.text
	.globl	fun
	.def	fun;	.scl	2;	.type	32;	.endef
	.seh_proc	fun
fun:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	$500502, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC3:
	.ascii "a = %i \12\0"
.LC4:
	.ascii "the fun() returns is : %d\0"
.LC5:
	.ascii "the id of fun() : %u\0"
	.align 8
.LC6:
	.ascii "this is a string let see how it works\0"
.LC7:
	.ascii "the value of value is : %s\12\0"
.LC8:
	.ascii "the expression : %f\0"
.LC9:
	.ascii "hello how are you\0"
.LC10:
	.ascii "the expression : %s\0"
.LC11:
	.ascii "value %i\0"
.LC12:
	.ascii "\12\12\12 recheck is : %i\0"
.LC13:
	.ascii "\12\12\12\12\11 %i\0"
.LC14:
	.ascii "\12%i\0"
.LC15:
	.ascii "hello_world.c\0"
.LC16:
	.ascii "16:27:09\0"
.LC17:
	.ascii "Oct 28 2021\0"
.LC18:
	.ascii "%i\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	call	start_fun
	movl	$25, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	call	fun
	call	fun
	movl	%eax, %edx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC7(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movabsq	$4610720961364379941, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC9(%rip), %rax
	movq	%rax, -16(%rbp)
	addq	$1, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$500, -20(%rbp)
	movl	-24(%rbp), %eax
	cltq
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	subq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC11(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	%eax, %edx
	leaq	.LC12(%rip), %rax
	movq	%rax, %rcx
	call	printf
	call	fun
	movl	%eax, %edx
	leaq	.LC13(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$36, %edx
	leaq	.LC14(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC15(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC16(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC17(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	$1, %edx
	leaq	.LC18(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$8, %edx
	leaq	.LC18(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev1, Built by MSYS2 project) 11.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
