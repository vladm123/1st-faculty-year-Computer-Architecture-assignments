#include<stdio.h>
int suma(int nr,...)
{
	_asm
	{
		mov ebx,[ebp+8]
		mov ecx,1
		mov edx,0

bucla:	cmp ecx,ebx
		jg adr1

		push edx

		mov eax,4
		mul ecx

		pop edx
		add edx,[ebp+eax+8]

		inc ecx
		jmp bucla
adr1:
		mov eax, edx
	}
}


char* mesaj = "suma = %d";

void main()
{ int nr;
nr = 3;
	_asm
	{

		push 1
		push 5
		push 12
		push nr
		call suma
		add esp, 16

		push eax
		push mesaj
		mov edx ,[printf]
		call edx
		add esp, 8

	}

}