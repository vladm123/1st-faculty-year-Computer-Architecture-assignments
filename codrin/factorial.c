#include<stdio.h>
void main()
{
	int n,p=1;
	printf("dati n=");
	scanf("%d",&n);

	_asm
	{
		mov ecx,1
bucla:	cmp ecx,n
		jg exit
		mov eax,p
		mul ecx
		mov p,eax
		add ecx,1
		jmp bucla
exit:
		
		
	}
	printf("\nfactorial =%d",p);
}