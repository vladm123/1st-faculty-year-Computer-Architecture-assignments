#include<stdio.h>
void main()
{
	int a,b,c,max=0;
	printf("dati a="); scanf("%d",&a);
	printf("dati b="); scanf("%d",&b);
	printf("dati c="); scanf("%d",&c);

	_asm
	{
		mov ecx,0
		mov eax,a
		mov ebx,b
bucla:	cmp ecx,2
		je exit
		cmp eax,ebx
		jle adr1
		mov max,eax
		jmp adr2

adr1: mov max, ebx
adr2:
		mov eax, max
		mov ebx, c
		add ecx,1
		jmp bucla
exit:
	}

	printf("maximul este : %d",max);

}
