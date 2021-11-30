#include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("Enter the value of a: ");
     scanf("%d",&a);
     printf("Enter the value of b: ");
     scanf("%d",&b);
     printf("Enter the value of c: ");
     scanf("%d",&c);

     if(a>b && a>c)
     {
         printf(" *** A is the greatest %d!***\n",c);

     }
     else
      if(b>a && b>c)
      {
          printf(" *** B is the greatest %d!***\n",b);

      }
      else
        if(c>a && c>b)
        {
            printf(" *** C is the greatest %d!***\n",c);

        }
        else 
        printf("ALL are equal \n");
return 0       
 }