#include<stdio.h>
void main()
{
	int a,b;
	printf("dati a=");scanf("%d",&a);
	printf("dati b=");scanf("%d",&b);
	_asm
	{
		mov eax,a
		mov ebx,b
bucla:	cmp eax,ebx
		je exit
		jge adr1
		sub ebx,eax
		jmp adr2
adr1: sub eax,ebx
adr2:
		jmp bucla
exit:
mov a, eax
	}

	printf("%d",a);
}