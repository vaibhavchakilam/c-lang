#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
printf("enter the three values");
scanf("%d %d %d",&a,&b,&c);
float s = (float)(a+b+c)/2;
float d = (float)(s*(s-a)*(s-b)*(s-c));
float Area = sqrt(d);
printf("%f",Area);
return 0;
}
