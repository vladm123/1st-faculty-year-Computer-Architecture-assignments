#include<stdio.h>
int fact(int i)
{
	_asm
	{
		mov ebx,[EBP+8]
		cmp ebx,0
		jne adr1
		mov eax,1
		jmp final
adr1:	mov ecx,ebx
		sub ecx,1
		push ebx
		push ecx
		call fact
		add esp,4
		pop ebx
		mul ebx
final:

	}

}
void main()
{
	int n;
	printf("dati n=");
	scanf("%d",&n);
	_asm
	{
		mov ebx,n
		push ebx
		call fact
		add esp, 4
		mov n,eax
	}
	printf("\n%d",n);
}