#include<stdio.h>
#include<string.h>
#include <stdlib.h>
char box[9][9] = {
    {0,0,5,0,0,4,3,6,0},
    {0,0,0,0,5,0,0,2,4},
    {0,4,9,6,7,0,0,0,0},
    {1,0,6,0,2,0,0,3,0},
    {9,0,0,7,0,0,1,0,8},
    {0,3,0,0,0,5,0,9,0},
    {2,0,0,5,0,7,0,0,9},
    {7,0,4,0,0,0,8,0,0},
    {0,9,0,0,4,0,0,0,6},
};
char magic[49] = {0x6b,0x2,0x66,0x70,0x44,0x69,0x7e,0x6e,0x43,0x4a,0x78,0x4a,0x6d,0x60,0x56,0x0,0x51,0x59,0x50,0x43,0x50,0x51,0x6d,0x74,0x2,0x55,0x50,0x52,0x6e,0x6f,0x79,0x40,0x5d,0x4b,0x1e,0x19,0x1c,0x74,0x3,0x54,0x7,0x4c,0x52,0x6a,0x60,0x50,0x58,0x40,0x58};
void check1(){
    int j;
    for(int i=0;i<9;i++){
        for(int k=1;k<10;k++){
            j=0;
            while (box[i][j] != k){
                if(j==8){
                    printf("Wrong!!!Try again!!!");
                    system("pause");
                    exit(0);
                }
                j++;
            }
            
        }
    }
}
void check2(){
    int i;
    for(int j=0;j<9;j++){
        for(int k=1;k<10;k++){
            i=0;
            while (box[i][j] != k){
                if(i==8){
                    printf("Wrong!!!Try again!!!");
                    system("pause");
                    exit(0);
                }
                i++;
            }
            
        }
    }
}
void check3(){
    int i,j,k;
    for(int x=0;x<9;x+=3){
        for(int y=0;y<9;y+=3){
            for(k=1;k<10;k++){
                i=0;
                j=0;
                while(box[x+i][y+j] != k){
                    if(i==2 && j==2){
                    printf("Wrong!!!Try again!!!");
                    system("pause");
                    exit(0);
                    }
                    j++;
                    if(j==3){
                        i++;
                        j=0;
                    }
                }
            }
        }
    }
}
int main(){
    puts("<---  moectf2021  --->");
    puts(" [A_game] Welcome to moectf2021.");
    puts("Let's play a game!");
    puts("Now input your answer, and if you are right, I will give you flag");
    printf("input : ");
    char input[100]={0};
    scanf("%s",input);
    if(strlen(input) != 49){
        printf("It's not enough.\n");
        system("pause");
        exit(0);
    }
    int k=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(box[i][j] == 0){
                box[i][j] = input[k++] - 48;
            }
        }
    }
    check1();
    check2();
    check3();
    puts("Congratulations!!!!");
    puts("Enjoy the beauty of reverse and sudoku!");
    printf("And here is your flag : moectf{");
    for(int i=0;i<strlen(input);i++){
        printf("%c",input[i]^magic[i]);
    }
    printf("}");
}