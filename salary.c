#include <stdio.h>
int main(){
int pay;
printf("pay  is ");
scanf("%d",&pay);
float hra = (float)pay*(10/100);
printf("hra %f\n",hra);
float ta= (float)pay*(5/100);
printf("ta %f\n",ta);
float salary = pay - hra - ta;
printf("salary is %f",salary);
return 0;
}


