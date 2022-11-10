#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void swap(int* p, int* p1){
    int temp;
    temp =*p;
    *p=*p1; 
    *p1=temp;
}

int main(void)
{   
    int arr1[6]={1,2,3,4,5,6};
    int arr2[6]={7,8,9,10,11,12};
    
    
    // int *temp=arr1;
    // *arr1=arr2;
    // *arr2=temp;
    
    // for (int i = 0; i < 5; i++)
    // printf( "%d ", arr1[i]);
    
    printf("arr1:",arr1);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    printf("arr2:", arr2);
    for (int i = 0; i < 5; i++)
    printf("%d ", arr2[i]);
    printf("\n");
    printf("after swap\n");
    swap(&arr1, &arr2);
    
     printf("arr1:",arr1);
    for (int i = 0; i < 5; i++)
        printf( "%d ", arr1[i]);
    printf("\n");
    printf("arr2:", arr2);
    for (int i = 0; i < 5; i++)
    printf( "%d ", arr2[i]);
    printf("\n");
   
    

    return 0;
}
