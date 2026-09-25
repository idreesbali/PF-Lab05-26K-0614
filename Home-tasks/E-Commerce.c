#include <stdio.h>
int main() {
    int discount = 0;
    printf("Product Category: ");
    printf("\n-----------------");
    printf("\n1. Electronics\n2. Clothing\n3. Books\n4. Household\n");
    printf("Enter your choice(1-4): ");
    int choice;
    scanf("%d", &choice);
    if(choice!=1 && choice!=2 && choice!=3 && choice!=4) {
        printf("Invalid Choice");
        return 0;
    }
    printf("\nCustomer Category:");
    printf("\n------------------");
    printf("\n1. Regular\n2. Premium\n3. Corporate\n");
    printf("Enter your choice: ");
    int category;
    scanf("%d", &category);
    if(category!=1 && category!=2 && category!=3) {
        printf("Invalid Category");
        return 0;
    }
    int order;
    printf("Enter your order number: ");
    scanf("%d", &order);
    printf("Enter your order amount: ");
    float amount;
    scanf("%f",&amount);
    printf("Enter your delivery distance(km): ");
    float distance;
    scanf("%f", &distance);
    switch(choice) {
        case 1:
        printf("\nProduct Category: Electronics");
            switch(category) {
                case 1:
                    printf("\nCustomer category: Regular");
                    discount = 5;
                break;
                case 2:
                    printf("\nCustomer category: Premium");
                    discount = 10;
                break;
                case 3:
                    printf("\nCustomer category: Corporate");
                    discount = 15;
                break;
            }
        break;
        case 2:
        printf("\nProduct Category: Clothing");
            switch(category) {
                case 1:
                    printf("\nCustomer category: Regular"); 
                    discount = 10;
                break;
                case 2:
                    printf("\nCustomer category: Premium");
                    discount = 15;
                break;
                case 3:
                    printf("\nCustomer category: Corporate");
                    discount = 20;
                break;
            }
        break;
        case 3:
        printf("\nProduct Category: Books");
            switch(category) {
                case 1:
                    printf("\nCustomer category: Regular");
                    discount = 8;
                break;
                case 2:
                    printf("\nCustomer category: Premium");
                    discount = 12;
                break;
                case 3:
                    printf("\nCustomer category: Corporate");
                    discount = 18;
                break;
            }
        break;
        case 4:
        printf("\nProduct Category: Household");
            switch(category) {
                case 1:
                    printf("\nCustomer category: Regular");
                    discount = 7;
                break;
                case 2:
                    printf("\nCustomer category: Premium");
                    discount = 14;
                break;
                case 3:
                    printf("\nCustomer category: Corporate");
                    discount = 20;
                break;
            }
        break;
    }
    printf("\nOriginal Order Amount: Rs. %.2f", amount);
    printf("\nDiscount Percentage: %d%%", discount);
    float discountAmount = amount*discount/100.0;
    float dis_amount = amount - discountAmount;
    printf("\nDiscount Amount: Rs. %.2f", discountAmount);
    printf("\nDiscounted Amount: Rs. %.2f", dis_amount);
    int ship = 0;
    if(dis_amount>=5000 || category==2 || category==3) {
        ship = 0;
    }
    else {
        ship = 20*distance;
    } 
    int priority = 0;
    if((category==2 || category==3) && amount>=10000) {
        priority = 1;
        ship += 500;
    }
    printf("\nDelivery Distance: %.2fKM", distance);
    printf("\nDelivery Priority Status: %s", (priority)? "ON\nPriority Charges: Rs. 500" : "OFF");
    int grp = order % 4;
    switch(grp) {
        case 0: 
            printf("\nProcessing Group: A");
            break;
        case 1: 
            printf("\nProcessing Group: B");
            break;
        case 2: 
            printf("\nProcessing Group: C");
            break;
        case 3: 
            printf("\nProcessing Group: D");
            break;
    } 
    float final = dis_amount+ship;
    printf("\nFinal Payable Amount: Rs. %.2f", final);
    return 0;
}