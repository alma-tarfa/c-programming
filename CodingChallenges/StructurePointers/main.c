#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};
void readItem(struct item *product);
void printItem (struct item *product);


int main()
{
    struct item prod;
    struct item *prodPtr;
    prodPtr = &prod;

    prodPtr->itemName = (char *)malloc(30* sizeof(char));

   if(!prodPtr){
    exit (-1);
   }


    //readItem
    readItem(prodPtr);


    printItem(prodPtr);

    free(prodPtr-> itemName);
    return 0;
}
void readItem(struct item *product){


    printf("\nEnter product information: \n");

    printf("\nProduct Name: ");
    scanf("%s", product->itemName);


    printf("\nProduct Price: ");
    scanf("%f", &product->price);


    printf("\nProduct Quantity: ");
    scanf("%d", &product->quantity);

    product->amount = (float) product->price * product->quantity;

}
void printItem (struct item *product){
    printf("\n\nProduct Information: \n");
    printf("\nProduct Name: %s", product->itemName);
    printf("\nProduct Price: %.2f", product->price);
    printf("\nProduct Quantity: %d", product->quantity);
    printf("\nProduct Amount: %.2f", product->amount);
}
