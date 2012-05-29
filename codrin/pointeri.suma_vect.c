#include<stdio.h>
int calc(int *v, int n)
{
	int suma;
	_asm 
	{
		mov edx,0
		mov ecx,0
		mov ebx,v
star:	cmp ecx,n
		jge finish
		add edx, [ebx + ecx*4]
		add ecx,1
		jmp star
	finish:
		mov eax, edx
	}
}
void main()
{
	int v[100],n,i;
	printf("dati n=");
	scanf("%d",&n);
	for(i=0; i < n; i++)
	{
		printf("v[%d]",i);
		scanf("%d",&v[i]);
	}
	printf("\n Suma elementelor vectorului este %d", calculeaza(v,n));
}