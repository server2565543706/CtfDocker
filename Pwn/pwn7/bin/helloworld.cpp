#include <cstdio>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

int sys(){
    system("/bin/sh");
    return 0;
}

int fun(){
    char a[10];
    printf("---------------------------------------------------\n");
    printf("|               欢迎你参加2023网协杯！                |\n");
    printf("|                赛事QQ群：627698135                |\n");
    printf("---------------------------------------------------\n");
    gets(a);
    return 0;
}
int main(){
    setvbuf(stdout,0LL,2,0LL);
    setvbuf(stdin,0LL,1,0LL);
    fun();
    return 0;
}