#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

int sys(){
    system("/bin/sh");
    return 0;
}
void print(){
    printf("---------------------------------------------------\n");
    printf("|                     help                        |\n");
    printf("|             The overflow point is 1             |\n");
    printf("---------------------------------------------------\n");
}
int fun(){
    char a[10];
    printf("---------------------------------------------------\n");
    printf("|               欢迎你参加2023网协杯！            |\n");
    printf("|                赛事QQ群：627698135              |\n");
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n");
    printf("|                         1?                      |\n");
    printf("|                         2?                      |\n");
    printf("|                      Exit：3                    |\n");
    printf("---------------------------------------------------\n");
    gets(a);
    if (strcmp(a,"1") == 0){

    }else if (strcmp(a,"2")==0) {
        print();
    }
    return 0;
}
int main(){
    setvbuf(stdout,0LL,2,0LL);
    setvbuf(stdin,0LL,1,0LL);
    fun();
}
