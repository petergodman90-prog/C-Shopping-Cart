#include <stdio.h>
int main(){


    char item[15] = " ";
    float price = 0;
    int quantity = 0;
    char currency = '$';
    float total = 0;


    printf("what item would you want to buy: ");
    fgets(item, sizeof(item),stdin);

    printf("what is the price for each item: ");
    scanf("%f", &price);

    printf("how many would you like: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s\n", quantity, item);

    printf("%c%.2f\n", currency, total);
    



    return 0;
}
