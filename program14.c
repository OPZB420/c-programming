#include<stdio.h>

void main()
{
     int a=6, b=2, c=3, d=12,e=4, result;
     result=a*a+b-d/e+c;
     printf("value of result is %d \n",result);
     result=a+(b*c)+d;
     printf("value of result is %d \n",result);
     result=(a+b)*c+d;
     printf("value of result is %d \n",result);
     result=(a+b)*(c+d);
     printf("value of result is %d \n",result);
}