#include<stdio.h>

int main()
{
    int a=10;
    int b=20;

    printf("value of a before swapping is: %d", a);
    printf("\n value of b before swapping is: %d", b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n value of a after swapping: %d", a);
    printf("\n value of b after swapping: %d", b);
    return 0;
}