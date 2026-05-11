#include<stdio.h>

int main()
{
    int choice;

    int a, b;

    printf("Enter first number\n");
    scanf("%d",&a);

    printf("Enter second number\n");
    scanf("%d",&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Addition = %d\n",a+b);
            break;

        case 2:
            printf("Subtraction = %d\n",a-b);
            break;

        case 3:
            printf("Multiplication = %d\n",a*b);
            break;

        case 4:
            printf("Division = %.2f\n",(float)a/b);
            break;

        case 5:
            printf("Exit\n");
            break;

        default:
            printf("Wrong Entry\n");
    }

    return 0;
}
