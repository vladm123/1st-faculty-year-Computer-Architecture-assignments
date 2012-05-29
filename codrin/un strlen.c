#include<stdio.h>
#include<string.h>
int nr_strlen(char *c)
{
	_asm
	{
		mov eax,0
		mov ebx,c
bucla:	mov cl, byte ptr [ebx+eax]
		cmp cl,0
		je finish
		add eax,1
		jmp bucla
finish:

	}
}