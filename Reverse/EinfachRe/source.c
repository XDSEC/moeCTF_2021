#include<stdio.h>
#include<string.h>
#include<windows.h>
//char *flag = "Ez_x0r}";
char *enflag = "(\x15:\x1b\x44\x14\x06";

int check(char *v){
	int c = 1;
	if(strlen(v)!=14){
		c=0;
	}
	return c;
}
int main(){
	char ipt[14];
	char v[7];
	strcpy(v,enflag);
	char t;
	printf("Give me your flag:\n");
	gets(ipt);
	if(!check(ipt)){
		printf("wrong length!!\n");
		system("pause");
		return 0;
	}
	for(int i=0;i<=6;i++){
		t = ipt[i]^ipt[i+7];
		if(t!=v[i]){
			printf("try again!!!\n");
			printf("your flag is moectf{******}\n");
			system("pause");
			return 0;
		}
	}
	printf("Congratulations!!!!!!!!!!!!!");
	system("pause");
	return 0;
}
