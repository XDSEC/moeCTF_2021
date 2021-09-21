#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
char bytes_114514[256] = "@BdxRTbRBbjIVf`PEyqe^\\^\\|cc|JRubaGLytHeRI@jgNegHU[Myy]==";
int func_114514(uint32_t *sbox, uint8_t *key, int len_key)
{
    int j=0;
    uint32_t k[256] = {0};
    for (int i = 0; i < 256; i++)
    {
        sbox[i] = i;
        k[i] = key[i % len_key];
    }
    for (int i = 0; i < 256; i++)
    {
        j = (j + sbox[i] + k[i]) % 256;
        int tmp = sbox[i];
        sbox[i] = sbox[j];
        sbox[j] = tmp;
    }
}
int func_1919810(uint32_t *sbox, char *input, int len_ipt)
{
    int i=0,j=0,t=0;
    unsigned char tmp;
    for (int k = 0; k < len_ipt; k++)
    {
        i = (i + 1) % 256;
        j = (j + sbox[i]) % 256;
        tmp = sbox[i];
        sbox[i] = sbox[j];
        sbox[j] = tmp;
        t = (sbox[i] + sbox[j]) % 256;
        input[k] ^= sbox[t];
    }
}
int HSencode(unsigned char *input, int len_ipt,unsigned char *dest)
{
    int len_dest;
    int i = 0, j = 0;
    if (len_ipt % 3 == 0)
    {
        len_dest = len_ipt / 3 * 4;
    }
    else
    {
        len_dest = (len_ipt / 3 + 1) * 4;
    }
    for (i = 0, j = 0; i < len_dest - 2; j += 3, i += 4)
    {
        dest[i] = ((input[j] >> 2) & 0b111111) + 61;
        dest[i + 1] = (((input[j] & 0b11) << 4) | ((input[j + 1] >> 4) & 0b1111)) + 61;
        dest[i + 2] = (((input[j + 1] & 0b1111) << 2) | ((input[j + 2] >> 6) & 0b11)) + 61;
        dest[i + 3] = (input[j + 2] & 0b111111) + 61;
    }
    switch(len_ipt % 3){
        case 1:
            dest[i-2] = '=';
        case 2:
            dest[i-1] = '=';
            break;
    }
}
int main()
{
    uint32_t sbox[256] = {0};
    unsigned char key[256] = {17,69,20,97,118,97,108,111,110,44,121,121,100,115};
    char input[100] = {0};
    char dest[512] = {0};
    puts("<---  moectf2021  --->");
    puts(" [baby_bc] Welcome to moectf2021.");
    puts("input your flag: ");
    scanf("%99s", input);
    if (strlen(input) != 40)
    {
        puts("Wrong length!");
        exit(0);
    }
    int len_key = strlen(key);
    func_114514(sbox, key, len_key);
    int len_ipt_1 = strlen(input);
    func_1919810(sbox, input, len_ipt_1);
    int len_ipt_2 = strlen(input);
    HSencode(input,len_ipt_2,dest);
    for(int i=0;i<strlen(dest);i++){
        if(dest[i] != bytes_114514[i]){
            printf("rua! you are wrong!");
            exit(0);
        }
    }
    printf("Congratulations!!!");
}