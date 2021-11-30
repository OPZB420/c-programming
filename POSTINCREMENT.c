#include<stdio.h>

int main()
{
    int a,b,res;
    a=3,b=2;
    printf("the value of a before increment is: %d\n", a);
    printf("the value of b before increment is: %d\n", b);

    res=++a+b;
    printf("the value of result is: %d\n", res);
    
    printf("the value of a after increment is: %d\n", a);
    printf("the value of b after increment is: %d\n", b);

    
}