#include <cstdio>
#include <cstring>
using namespace std;

// flag: D1S4ss3mbl3_th3_b0mb
unsigned char cipher[] = {68,63,83,47,115,134,62,174,85,190,24,95,116,104,51,95,242,6,109,98};
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
	*a2 = tmp; // -1
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

void PRGA(unsigned char* S, unsigned char* cipher) {
	int i = 0, j = 0;
	int cipher_len = my_strlen(cipher);
	for (int k = 0; k < cipher_len; k++) {
		i = (i + 1) % 256;
		j = (j + S[i]) % 256;
		swap(&S[i], &S[j]);
		cipher[k] ^= S[(S[i] + S[j])%256];
	}
}

int main() {
    KSA(key, S);
    PRGA(S, cipher);
    // for (int i = 0; i < 20; i++) {
    //     printf("%d\n", cipher[i]);
    // }
    printf("%s", cipher);
    return 0;
}