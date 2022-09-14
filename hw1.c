#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

int main()
{
    int num1, num2, num3;
    printf("Input two integers: ");
    scanf("%d, %d", &num1, &num2);
    
    printf("%d & %d = %d\n", num1, num2, num1&num2);
    printf("%d | %d = %d\n", num1, num2, num1|num2);
    printf("%d ^ %d = %d\n", num1, num2, num1^num2);

    return 0;
}
