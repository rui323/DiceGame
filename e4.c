#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num1,num2;
    char str[256];

    printf("What is your name?\n");
    scanf("%s",str);
    printf("Hello, %s!\n",str);

    printf("Rolling the dice...\n");
    srand(time(NULL));
    num1 = 1 + rand() % 6;
    num2 = 1 + rand() % 6;

    printf("Die 1: %d\n",num1);
    printf("Die 2: %d\n",num2);
    printf("Total value: %d\n",num1 + num2);
    
    if((num1+num2) >= 7)printf("%s won\n",str);
    else printf("%s lost\n",str);
    return 0;
}
