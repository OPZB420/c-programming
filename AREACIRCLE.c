#include<stdio.h>
#include<conio.h>

int main()
{
    double radius;
    double area;
    printf("the radius of the circle is:");
    scanf("%lf", &radius);

    area = 3.14*radius*radius;
     printf("\n the area of the circle is: %.2lf", area);
     getch();
return 0;


}