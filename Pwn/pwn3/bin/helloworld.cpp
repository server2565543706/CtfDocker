#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void catflag(){
    char input[400];
    scanf("%s",input);
    if (strlen(input) > 256) {
        system("cat ./flag*");
    }else {
        printf("Your points are not enough\n");
    }
};
void View(){
    printf("--------------------------------------------------\n");
    printf("This is a plastic overflow\n");
    printf("--------------------------------------------------\n");
};
int main(){
    setvbuf(stdout,0LL,2,0LL);
    setvbuf(stdin,0LL,1,0LL);
    int num;
    printf("Hello!\n");
    printf("--------------------------------------------------\n");
    printf("1,Purchase 2023wxb Flag\n");
    printf("2,View prompts\n");
    printf("3.Exit\n");
    printf("--------------------------------------------------\n");
    scanf("%d",&num);
    if (num == 1) {
        printf("Enter the item you want to purchase\n");
        catflag();
        return main();

    }else if (num == 2) {
        printf("2\n");
        View();
        return main();
    } else {
        printf("Exit\n");
        return 0;
    }
    return 0;
};