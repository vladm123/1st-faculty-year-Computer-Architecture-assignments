#include<stdio.h>
void main()
{
	int s=0,n;
	printf("dati n=",&n);
	scanf("%d",&n);

	_asm
	{
		mov eax,1
		mov ebx,n
		mov ecx,0
bucla:	cmp eax,ebx
		jg exit
		add ecx,eax
		add eax,1
		jmp bucla
exit:
mov s,ecx
	}
	printf("suma primelor %d numere este :%d\n",n,s);
}