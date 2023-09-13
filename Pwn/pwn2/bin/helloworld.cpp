#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    setvbuf(stdout,0LL,2,0LL);
    setvbuf(stdin,0LL,1,0LL);
    int num, lower_limit = 10, uper_limit = 20;

    printf("Hello!\n");
    printf("2023WXB\n");
    scanf("%d",&num);
    if (num >= lower_limit && num <= uper_limit) {
        printf("oK!!!\n");
        printf("FLAG\n");
        return system("/bin/sh");
    }else {
        printf("NO!NO!NO!\n");
        return main();
    }
    return 0;
}