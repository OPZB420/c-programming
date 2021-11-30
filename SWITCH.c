#include<stdio.h>

int main()
{
    int operator,num1,num2;
    while(operator!=0)
    {
        printf("\nENTER THE OPERATOR: \n");
        printf("1: addition\n");
        printf("2: Substraction\n");
        printf("3: Multiplication\n");
        printf("4: Division\n");
        printf("0: EXIT\n");
        scanf("%d",&operator);
        
        switch(operator)

    {
        case 1:
        printf("Enter two numbers:");
        scanf("%d%d",&num1,&num2);
        printf("SUM is: %d", num1+num2);
        break;

        case 2:
        printf("Enter two numbers:");
        scanf("%d%d",&num1,&num2);
        printf("Difference is: %d", num1-num2);
        break;

        case 3:
        printf("Enter two numbers:");
        scanf("%d%d",&num1,&num2);
        printf("Product is: %d", num1*num2);
        break;

        case 4:
        printf("Enter two numbers:");
        scanf("%d%d",&num1,&num2);
        printf("Quotient is: %d", num1/num2);
        break;

    }
}
}
