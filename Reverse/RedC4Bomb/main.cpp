#include <cstdio>
#include <cstring>
using namespace std;

// flag: moectf{D1S4ss3mbl3_th3_b0mb}

unsigned char input[1000];
unsigned char cipher[1000];
const unsigned char aims[] = {68, 63, 83, 47, 115, 134, 62, 174, 85, 190, 24, 95, 116, 104, 51, 95, 242, 6, 109, 98};

int my_strlen(unsigned char* a) {
	int len = 0;
	while (*a++ != '\0') {
		len++;
	}
	return len;
}

void empty() {
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
	__asm
	{
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
		push eax
		pop eax
		push ebx
		pop ebx
		_EMIT 0x90
		pusha
		popa
	}
}

class RC4 {
public:
	unsigned char S[256] = {'\0'};
	const char* key = "THISISAFAKEFLAG";
	
	void swap(unsigned char* a1, unsigned char* a2);
	void KSA(const char* key, unsigned char* S);
	void PRGA(unsigned char* S, unsigned char* input, unsigned char* cipher);
};

void RC4::swap(unsigned char* a1, unsigned char* a2) {
	__asm {
		xor eax, eax
		jz labe12
		_emit 0x11
		_emit 0x22
		_emit 0x33
	labe12:
	}
	unsigned char tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void RC4::KSA(const char* key, unsigned char* S) {
	__asm {
		xor eax, eax
		jz labe12
		_emit 0x11
		_emit 0x22
		_emit 0x33
	labe12:
	}
	int key_len = strlen(key);
	int j = 0;
	__asm {
		xor eax, eax
		test eax, eax
		jz labe11
		jnz labe10
	labe10 :
		_emit 0xe8
	labe11 :
	}
	for (int i = 0; i < 256; i++) {
		S[i] = 255 - i;
		j = (j + S[i] + key[i % key_len]) % 256;
		swap(&S[i], &S[j]);
	}
}

void RC4::PRGA(unsigned char* S, unsigned char* input, unsigned char* cipher) {
	__asm {
		xor eax, eax
		jz labe12
		_emit 0x11
		_emit 0x22
		_emit 0x33
	labe12:
	}
	int i = 0, j = 0;
	int input_len = my_strlen(input);
	for (int k = 0; k < input_len; k++) {
		i = (i + 1) % 256;
		j = (j + S[i]) % 256;
		__asm {
			xor eax, eax
			test eax, eax
			jz labe11
			jnz labe10
		labe10 :
			_emit 0xe8
		labe11 :
		}
		swap(&S[i], &S[j]);
		cipher[k] = input[k] ^ S[((S[i] + S[j]) % 256)];
	}
	
}

int main() {
	__asm {
		xor eax, eax
		jz labe12
		_emit 0x11
		_emit 0x22
		_emit 0x33
	labe12:
	}
	printf("[root@Track.Sh]# Welcome to moectf2021!\n");
	printf("[root@Track.Sh]# Input your flag to dismantle the bomb: ");
	empty();
	scanf("%s", input);
	empty();
	RC4 rc4;
	empty();
	rc4.KSA(rc4.key, rc4.S);
	rc4.PRGA(rc4.S, input, cipher);
	empty();
	if (my_strlen(input) != 20) {
		printf("[root@Track.Sh]# Wrong length! The bomb will go off!\n");
		return 1;
	}
	empty();
	__asm {
		xor eax, eax
		test eax, eax
		jz labe11
		jnz labe10
	labe10 :
		_emit 0xe8
	labe11 :
	}
	empty();
	for (int i = 0; i < 20; i++) {
		if (cipher[i] != aims[i]) {
			printf("[root@Track.Sh]# NoNoNo! The bomb will go off!\n");
			return 1;
		}
	}
	empty();
	printf("[root@Track.Sh]# Right! The bomb was successfully disassembled~\n");
	printf("[root@Track.Sh]# The flag is moectf{%s}\n", input);
	return 0;
}