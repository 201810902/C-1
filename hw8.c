#include <stdio.h>
#include <math.h>

double pow(double a, double b);//분산

double sqrt(double x);//표준편차

int main()
{
    double arr1[5];
    
    double total=0.0;
    
    int i, n=0;
    int sum=0;
    
    printf("Enter 5 real numbers: \n");//실수 5개 입력받기
    
    for(i=0; i<5; i++){
        scanf("%lf", &arr1[i]);
    }
    
    for(int i=1; i<n-1; i++){
        sum+= arr1[i];
    }
    
    double avr= (double)sum/(n-2);
    
    for (int i=1; i<n; i++){
        total+=pow(arr1[i]-avr , 2); 
    }
    double var = total /(n-2);
    
    double stddev = sqrt(var);
    
    printf("Standard Deviation = %f",stddev); //표준편차 출력
    return 0;
}