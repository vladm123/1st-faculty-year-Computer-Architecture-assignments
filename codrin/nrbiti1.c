#include<stdio.h>
void main()
{
	int a,s=0;
	printf("dati a=");scanf("%d",&a);

	_asm
	{
		mov ecx,0
		mov ebx, a
bucla:	cmp ebx,0
		je exit
		mov edx,1
		and edx,ebx
		cmp edx,1
		jne adr1
		add ecx,1
		shr ebx,1
		jmp bucla
adr1: shr ebx,1
	  jmp bucla
exit:
		mov s,ecx

	}
	printf("suma nr bitilor este :%d",s);

}