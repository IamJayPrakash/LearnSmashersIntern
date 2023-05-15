/*TASK 2
Aim:Create a simple calculator that can perform basic arithmetic perations like addition, subtraction, multiplication, and division.
Author:Jay Prakash
Status: Working
*/
#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    while (1)
    {
        printf("Select an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0)
            {
                printf("Error: Division by zero.\n");
            }
            else
            {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
