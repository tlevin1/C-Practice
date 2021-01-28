#include <stdio.h>
#include <stdlib.h>
//program utilizing structs
struct items{
    char *itemName;
    int quantity;
    float price;
    float amount;
};
void readItem(struct items *ptr){
    printf("Enter product name:");
    scanf("%s",ptr -> itemName);
    printf("\nEnter price:");
    scanf("%f",&ptr -> price);
    printf("\nEnter quantity:");
    scanf("%d",&ptr -> quantity);
    ptr -> amount = (float)ptr -> quantity * ptr -> price;
}
void printItem(struct items *ptr){
    printf("\nItem Name:%s",ptr -> itemName);
    printf("\nPrice:%f",ptr -> price);
    printf("\nQuantity:%d",ptr ->quantity );
    printf("\nTotal:%f",ptr ->amount);
}
int main() {
    struct items *ptr;
    struct items i;
    ptr = &i;
    ptr -> itemName = (char *)malloc(30 * sizeof(char));
    if(ptr == NULL)
        exit(-1);
    readItem(ptr);
    printItem(ptr);
    free(ptr -> itemName);
    return 0;
}

