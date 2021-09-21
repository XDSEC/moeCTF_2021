#include <cstdio>
#include <cstring>
using namespace std;

unsigned char flag[] = "D1S4ss3mbl3_th3_b0mb";
unsigned char cipher[100];
unsigned char S[256];

const char* key = "THISISAFAKEFLAG";

int my_strlen (unsigned char *a) {
	int len = 0;
	while (*a++ != '\0') {
		len ++;
	}
	return len;
}

void swap(unsigned char* a1, unsigned char* a2) {
	unsigned char tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void KSA(const char* key, unsigned char* S) {
	int key_len = strlen(key);
	int j = 0;
	for (int i = 0; i < 256; i++) {
		S[i] = 255 - i;
		j = (j + S[i] + key[i % key_len]) % 256;
		swap(&S[i], &S[j]);
	}
}

void PRGA(unsigned char* S, unsigned char* input, unsigned char* cipher) {
	int i = 0, j = 0;
	int input_len = my_strlen(input);
	for (int k = 0; k < input_len; k++) {
		i = (i + 1) % 256;
		j = (j + S[i]) % 256;
		swap(&S[i], &S[j]);
		cipher[k] = input[k] ^ S[(S[i] + S[j])%256];
	}
}

void EXTRA(unsigned char *cipher) {

}

int main() {
    KSA(key, S);
    PRGA(S, flag, cipher);
    EXTRA(cipher);
    for (int i = 0; i < 20; i++) {
        printf("%d\n", cipher[i]);
    }
    return 0;
}