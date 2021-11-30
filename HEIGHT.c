#include<stdio.h>
#include<conio.h>
int main()
{
    int height;
    printf("Enter your height :");
    scanf("%d", &height);
    if(height>=6)
    {
        printf("YOU ARE TALL");
    }
    else
     if(height<=4)
     {
         printf("YOU ARE SMALL");
     }
      else
       printf("YOU ARE AVERAGE");
       getch();
return 0;
}