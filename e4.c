#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num1,num2;

    printf("Rolling the dice...\n");
    srand(time(NULL));
    num1 = 1 + rand() % 6;
    num2 = 1 + rand() % 6;

    printf("Die 1: %d\n",num1);
    printf("Die 2: %d\n",num2);
    printf("Total value: %d\n",num1 + num2);
    
    return 0;
}