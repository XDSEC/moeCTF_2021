#include <stdio.h>
char input[] = "reverierwilllikeyou!";
char bank[100000];
int main() {
    FILE *f = fopen("./file_org", "rb");
    fseek(f, 0, 2);
    long file_len = ftell(f);
    rewind(f);
    for (int i = 0; i < file_len - 1; i++) {
        bank[i] = getc(f);
        bank[i] = ~(bank[i] ^ input[i%20]);
    }
    fclose(f);
    FILE *F = fopen("./file", "wb");
    for (int i = 0; i < file_len; i++) {
        fputc(bank[i], F);
    }
    return 0;
}