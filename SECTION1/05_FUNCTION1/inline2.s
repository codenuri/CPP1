	.file	"inline2.cpp"
	.text
	.globl	__Z4add1ii
	.def	__Z4add1ii;	.scl	2;	.type	32;	.endef
__Z4add1ii:
	pushl	%ebp
	movl	%esp, %ebp
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	popl	%ebp
	ret
	.section	.text$_Z4add2ii,"x"
	.linkonce discard
	.globl	__Z4add2ii
	.def	__Z4add2ii;	.scl	2;	.type	32;	.endef
__Z4add2ii:
	pushl	%ebp
	movl	%esp, %ebp
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	popl	%ebp
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$2, 4(%esp)
	movl	$1, (%esp)
	call	__Z4add1ii
	movl	%eax, 28(%esp)
	movl	$2, 4(%esp)
	movl	$1, (%esp)
	call	__Z4add2ii
	movl	%eax, 24(%esp)
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (i686-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
