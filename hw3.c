#include <stdio.h>

int main()
{
    int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 5; num1++) 
	{
		for (num2=num1; num2 <= 5-1; num2++) {
			printf(" ");
		}
		for (num3 = 0; num3 <=(num1*2); num3++) {
			printf("*");
		}
		printf("\n");
	}
    return 0;
}
