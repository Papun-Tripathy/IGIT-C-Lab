/*
An item is represented by the following attributes:
− Either a model number (string) or an item code (string)
− Name (string)
− Price (float)
Write a program using union to read the information for 5 items from the keyboard and print the same on
the screen
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

union Identification
{
    char modelNumber[100];
    char itemCode[100];
};

struct ItemDetails
{
    union Identification id;
    char name[100];
    float price;
};

int main()
{
    struct ItemDetails items[5];

    printf("Enter the details of 5 Products: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("====================================================\n");
        printf("Enter the item details for item %d\n", i + 1);
        printf("====================================================\n");
        int choice;
        printf("For entering model number enter 1 else press any key: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 1)
        {
            printf("model number:");
            gets(items[i].id.modelNumber);
        }
        else
        {
            printf("ItemCode:");
            gets(items[i].id.itemCode);
        }
        printf("Item name: ");
        gets(items[i].name);

        printf("Item price: ");
        scanf("%f", &items[i].price);
    }

    printf("Details of the 5 products are: \n");

    for (int i = 0; i < 5; i++)
    {

        printf("====================================================\n");
        printf("Item-%d: \n", i + 1);
        printf("====================================================\n");
        printf("\t itemCode: %s\n", items[i].id.modelNumber);
        printf("\t Item name: %s\n", items[i].name);
        printf("\t Item price: %f \n", items[i].price);
    }

    return 0;
}