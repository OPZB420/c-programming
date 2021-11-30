#include<stdio.h>
#include<conio.h>
 int main()
 {int age;
 printf("enter your age:");
 scanf("%d",&age);
 
 if(age>17)
 {
     goto g;
  }
   else
 {
     goto s;
 }
 g:
printf("YOU ARE ELIGIBLE\n");
s:
 printf("BSDK BACHA HAI TU\n");
 
getch();
return 0;

 }