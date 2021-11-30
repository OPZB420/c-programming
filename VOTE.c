#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("PERSON IS ELIGIBLE TO CAST HIS/HER VOTE");
 }
 else
  {printf("CANT VOTE");
  }
return 0;

}