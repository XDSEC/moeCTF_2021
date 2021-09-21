#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char input[100] = "";
bool condition = true;
bool check1(char* input){
    if(strlen(input) != 58){
        puts("Wrong length!");
        condition = false;
    }
}
bool check2(char* input){
    if(memcmp(input,"moectf{",7)){
        puts("In this game, every flag begin with moectf{");
        condition = false;
    }
}
bool check3(char* input){
    if(input[strlen(input)-1] != 125){
        puts("where is your '}' ???");
        condition = false;
    }
}
char *flag = "moectf{W31C0Me_t0_m03CTF_2021_w0o0o0oooo0ooooo0o0oooo0!!!}";
bool check4(char* input){
    for(int i=7;i<57;i++){
        if(flag[i] != input[i]){
            puts("Wrong flag!");
            condition = false;
            break;
        }
    }
}
bool (*funclist[4])(char*) = {check1,check2,check3,check4};
int main(){
    puts("<---  moectf2021  --->");
    puts(" [CheckIn] Welcome to moectf2021.");
    puts("This is a really eazy chall. I believe it is easy for you to get the flag");
    puts("Now input your flag and I will check it : ");
    scanf("%100s",input);
    for (int i=0;i<4;i++){
        funclist[i](input);
    }
    if(condition){
        puts("Congratulations!!!");
        puts("See you next chall!!!");
    }
    else{
        puts("Something went wrong!   QwQ");
        puts("Try againt!!!");
    }
    puts("按任意键以继续");
    getchar();
    getchar();
}