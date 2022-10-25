#include <stdio.h>
#include <string.h>
char input[10000];
char bank[10000];

int main() {
    printf("                                                           ,----,      \n");
    printf("          ____                                       ,/   .`|          \n");
    printf("        ,'  , `.                      ,----..      ,`   .'  :   ,---,. \n");
    printf("     ,-+-,.' _ |                     /   /   \   ;    ;     / ,'  .' | \n");
    printf("  ,-+-. ;   , ||   ,---.            |   :     :.'___,/    ,',---.'   | \n");
    printf(" ,--.'|'   |  ;|  '   ,'\           .   |  ;. /|    :     | |   |   .' \n");
    printf("|   |  ,', |  ': /   /   |   ,---.  .   ; /--` ;    |.';  ; :   :  :   \n");
    printf("|   | /  | |  ||.   ; ,. :  /     \ ;   | ;    `----'  |  | :   |  |-, \n");
    printf("'   | :  | :  |,'   | |: : /    /  ||   : |        '   :  ; |   :  ;/| \n");
    printf(";   . |  ; |--' '   | .; :.    ' / |.   | '___     |   |  ' |   |   .' \n");
    printf("|   : |  | ,    |   :    |'   ;   /|'   ; : .'|    '   :  | '   :  '   \n");
    printf("|   : '  |/      \   \  / '   |  / |'   | '/  :    ;   |.'  |   |  |   \n");
    printf(";   | |`-'        `----'  |   :    ||   :    /     '---'    |   :  \   \n");
    printf("|   ;/                     \   \  /  \   \ .'               |   | ,'   \n");
    printf("'---'                       `----'    `---`                 `----'     \n");
    printf("                                                                       \n");
    printf("[root@Track.Sh]# Welcome to moectf2021! It's just a mirror flower moon~\n");
    scanf("%s", input);
    int input_len = strlen(input);
    FILE *f = fopen("file_org", "rb");
    if (!f) {
        printf("[root@Track.Sh]# An unexcepted error happened:(\n");
        return 1;
    }
    fseek(f, 0, 2);
    long file_len = ftell(f);
    rewind(f);
    for (int i = 0; i < file_len - 1; i++) {
        bank[i] = getc(f);
        bank[i] = ~(bank[i] ^ input[i%input_len]);
    }
    fclose(f);
    FILE *F = fopen("file", "wb");
    for (int i = 0; i < file_len; i++) {
        fputc(F, bank[i]);
    }
    printf("[root@Track.Sh]# It's over, I don't know what you gonna do but... Just keep justy.");
    return 0;
}

