#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getshell(){
    printf("Congratulations on your success Get Shell 2023 WXB \n");
    char input[400];
    scanf("%s",input);
    if (strlen(input) > 256) {
        system("cat ./flag*");
    }else {
    }
};

void getnameadd(){
    printf("Enter the item you want to obtain\n");
    char data[100];
    char data1[100];
    printf("Input Name：");
    scanf("%s",data);
    if (strcmp(data,"flag") == 0 || strcmp(data,"FLAG") == 0) {
        printf("yes|no：");
        scanf("%s",data1);
        if (strcmp(data1,"yes") == 0 || strcmp(data1,"FLAG") == 0) {
            getshell();
        }else {
            return getnameadd();
        }
    }else {
        printf("no flag\n");
    }
};


int main(){
    setvbuf(stdout,0LL,2,0LL);
    setvbuf(stdin,0LL,1,0LL);
    int num;
    printf("---------------------------------------------------\n");
    printf("|               欢迎你参加2023网协杯！            |\n");
    printf("|                赛事QQ群：627698135              |\n");
    printf("|              输入1来获取你想要的东西            |\n");
    printf("---------------------------------------------------\n");
    printf("Input:");
    scanf("%d",&num);
    if (num == 1) {
        getnameadd();
    }else {
        printf("-------------------\n");
        printf("|                 |\n");
        printf("|  不可以这样！！ |\n");
        printf("|                 |\n");
        printf("-------------------\n");
        return main();
    }
    return 0;
};