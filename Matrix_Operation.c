/*Task 4
AIM: Matrix operations :
Write a program that can perform matrix operations like addition, subtraction, multiplication, and transpose.
Author: Jay Prakash
Status: Working;
*/

#include <stdio.h>

void add_matrices(int A[10][10], int B[10][10], int m, int n)
{
    int C[10][10], i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nThe sum of the matrices is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void subtract_matrices(int A[10][10], int B[10][10], int m, int n)
{
    int C[10][10], i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nThe difference of the matrices is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrices(int A[10][10], int B[10][10], int m, int n, int p)
{
    int C[10][10], i, j, k;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nThe product of the matrices is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void transpose_matrix(int A[10][10], int m, int n)
{
    int B[10][10], i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            B[i][j] = A[j][i];
        }
    }

    printf("\nThe transpose of the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[10][10], B[10][10], m, n, p, choice, i, j;

    printf("Enter the number of rows of matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns of matrix A: ");
    scanf("%d", &n);

    printf("\nEnter the elements of matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter the number of rows of matrix B: ");
    scanf("%d", &n);
    printf("Enter the number of columns of matrix B: ");
    scanf("%d", &p);

    printf("\nEnter the elements of matrix B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    while (1)
    {
        printf("\nChoose a matrix operation:\n");
        printf("1. Add matrices\n");
        printf("2. Subtract matrices\n");
        printf("3. Multiply matrices\n");
        printf("4. Transpose matrix\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (m == n && n == p)
            {
                add_matrices(A, B, m, n);
            }
            else
            {
                printf("\nMatrix addition is not possible.\n");
            }
            break;

        case 2:
            if (m == n && n == p)
            {
                subtract_matrices(A, B, m, n);
            }
            else
            {
                printf("\nMatrix subtraction is not possible.\n");
            }
            break;

        case 3:
            if (n == m)
            {
                multiply_matrices(A, B, m, n, p);
            }
            else
            {
                printf("\nMatrix multiplication is not possible.\n");
            }
            break;

        case 4:
            transpose_matrix(A, m, n);
            break;

        case 5:
            printf("\nExiting...\n");
            return 0;

        default:
            printf("\nInvalid choice. Try again.\n");
        }
    }

    return 0;
}
