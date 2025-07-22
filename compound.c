#include <stdio.h>
#include <math.h>
int main(){
int p,t,r,n;
printf("enter the p,t,r,n");
scanf("%d %d %d %d",&p,&t,&r,&n);
float c =(float)p*pow((1+(r/n)),n*t);
printf("%f",c);
return 0;
}
