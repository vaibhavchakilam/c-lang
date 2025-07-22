#include <stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter the num1,num2,num3 values");
    scanf("enter the values %d %d %d ",&num1,&num2,&num3);
    sum = num1+num2+num3;
    printf("the sum is %d",sum);
    avg =(num1+num2+num3)/3;
    printf("the avg is %f",avg);
    return 0;
}
