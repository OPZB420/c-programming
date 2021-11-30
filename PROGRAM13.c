#include<stdio.h>

void main()
{
     int a=4, b=3, c=2, d=5, result;
     result=a+b*c+d;
     printf("value of result is %d \n",result);
     result=a+(b*c)+d;
     printf("value of result is %d \n",result);
     result=(a+b)*c+d;
     printf("value of result is %d \n",result);
     result=(a+b)*(c+d);
     printf("value of result is %d \n",result);

}