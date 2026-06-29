#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product inventory[MAX];
int count = 0;

void addProduct()
{
    if (count == MAX)
    {
        printf("Inventory is full.\n");
        return;
    }

    printf("Enter Product ID: ");
    scanf("%d", &inventory[count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", inventory[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &inventory[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &inventory[count].price);

    count++;
    printf("Product added successfully.\n");
}

void displayProducts()
{
    int i;

    if (count == 0)
    {
        printf("No products in inventory.\n");
        return;
    }

    printf("\nID\tName\t\tQuantity\tPrice\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n",
               inventory[i].id,
               inventory[i].name,
               inventory[i].quantity,
               inventory[i].price);
    }
}

int searchProduct(int id)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (inventory[i].id == id)
            return i;
    }

    return -1;
}

void updateQuantity()
{
    int id, index;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    index = searchProduct(id);

    if (index == -1)
    {
        printf("Product not found.\n");
        return;
    }

    printf("Enter New Quantity: ");
    scanf("%d", &inventory[index].quantity);

    printf("Quantity updated successfully.\n");
}

void deleteProduct()
{
    int id, index, i;

    printf("Enter Product ID to delete: ");
    scanf("%d", &id);

    index = searchProduct(id);

    if (index == -1)
    {
        printf("Product not found.\n");
        return;
    }

    for (i = index; i < count - 1; i++)
    {
        inventory[i] = inventory[i + 1];
    }

    count--;

    printf("Product deleted successfully.\n");
}

int main()
{
    int choice, id, index;

    do
    {
        printf("\n----- INVENTORY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                printf("Enter Product ID: ");
                scanf("%d", &id);

                index = searchProduct(id);

                if (index == -1)
                {
                    printf("Product not found.\n");
                }
                else
                {
                    printf("\nProduct Found\n");
                    printf("ID: %d\n", inventory[index].id);
                    printf("Name: %s\n", inventory[index].name);
                    printf("Quantity: %d\n", inventory[index].quantity);
                    printf("Price: %.2f\n", inventory[index].price);
                }
                break;

            case 4:
                updateQuantity();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}