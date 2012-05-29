#include<stdio.h>
void main()
{
	int a,s=0;
	printf("dati a="); scanf("%d",&a);
	_asm
	{
		mov eax,a
		mov ebx,s
bucla:	cmp eax,0
		je exit
		mov edx,0
		mov eax,a
		mov ecx,10
		div ecx
		add ebx,edx
		mov a,eax
		jmp bucla
exit:
mov s,ebx
	}
	printf("\nsuma cifreleor numarului este:%d\n",s);
}