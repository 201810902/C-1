#include <stdio.h>
#define _CRT_SECURE_NO_WANRINGS

void binf(int n){ //2진수 변환해주는 재귀함수
    if(n>1)binf(n/2);
    printf("%d",n%2);
}

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    binf(num);

    return 0;
}
