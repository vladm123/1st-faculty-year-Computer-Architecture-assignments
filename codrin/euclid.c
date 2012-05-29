#include<stdio.h>
void main()
{
	int a,b,c;
	printf("dati a = ");scanf("%d",&a);
	printf("dati b = ");scanf("%d",&b);

	_asm
	{

bucla:	cmp b ,0
		je _exit
		mov edx,0
		mov eax,a
		div b
		mov c,edx
		mov edx,b
		mov a,edx
		mov edx,c
		mov b,edx
		jmp bucla
_exit:
	}
	printf("cmmdc cu euclid : %d",a);
}