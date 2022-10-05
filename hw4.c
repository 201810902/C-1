#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    
    if (num<0){
        printf("It is not a prime number");
    }
    else if(num==0){
        printf("zero, It is not a prime number");
    }
    else if((num%2)==0)
    {
        printf("It is not a prime number");
    }
    else if ((num%3)==0){
        printf("It is not a prime number");
    }
    else
        printf("It is a prime number");

    return 0;
}
