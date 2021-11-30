#include<stdio.h>

int main()
{
    int a;
    int b;
    int temp;
    a=10;
    b=20;
printf("\n value of a before swapping is: %d \n", a);
    printf(" value of b before swapping is: %d ", b);

    temp = a;
    a=b;
    b=temp;

    printf("\n value of a after swapping is: %d \n", a);
    printf(" value of b after swapping is: %d ", b);
    return 0;

}