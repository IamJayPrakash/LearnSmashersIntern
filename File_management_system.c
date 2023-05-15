/* TASK 1
Aim: Write a program that performs basic file management tasks like creating, 
     reading, updating, and deleting files.
Author: Jay Praksah
Status: Working
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[50], c, newContent[100];
    int choice;

    while (1)
    {
        printf("\nSelect an option:\n");
        printf("1. Create a file\n");
        printf("2. Write to a file\n");
        printf("3. Read from a file\n");
        printf("4. Update a file\n");
        printf("5. Delete a file\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter file name: ");+
            scanf("%s", filename);
            fp = fopen(filename, "w");
            if (fp == NULL)
            {
                printf("Error creating file.\n");
                exit(1);
            }
            printf("File created successfully.\n");
            fclose(fp);
            break;

        case 2:
            printf("Enter file name: ");
            scanf("%s", filename);
            fp = fopen(filename, "a");
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                exit(1);
            }
            printf("Enter content to write to file: ");
            scanf(" %[^\n]", newContent);
            fprintf(fp, "%s", newContent);
            fclose(fp);
            printf("Content written to file successfully.\n");
            break;

        case 3:
            printf("Enter file name: ");
            scanf("%s", filename);
            fp = fopen(filename, "r");
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                exit(1);
            }
            printf("File contents:\n");
            while ((c = fgetc(fp)) != EOF)
            {
                printf("%c", c);
            }
            fclose(fp);
            break;

        case 4:
            printf("Enter file name: ");
            scanf("%s", filename);
            fp = fopen(filename, "a");
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                exit(1);
            }
            printf("Enter new content to append to the file: ");
            scanf(" %[^\n]", newContent);
            fprintf(fp, "%s", newContent);
            fclose(fp);
            printf("Content appended to file successfully.\n");
            break;

        case 5:
            printf("Enter file name: ");
            scanf("%s", filename);
            if (remove(filename) == 0)
            {
                printf("File deleted successfully.\n");
            }
            else
            {
                printf("Error deleting file.\n");
                exit(1);
            }
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
