#include <stdio.h>
int main() {
    int boarding=0, lag=0, asi=0, allowance=0;
    printf("Enter passenger category(A for adult, S for student, C for senior citizen): ");
    char cat, type;
    float bag;
    scanf(" %c", &cat);
    printf("Domestic / International flights(I/D): ");
    scanf(" %c", &type);
    printf("Enter baggage weight: ");
    scanf("%f", &bag);
    printf("Are your documents valid(Y/N): ");
    char doc;
    scanf(" %c", &doc);
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    int veri=age%5;
    switch(cat) {
        case 'A':
            switch(type) {
            case 'D':
                allowance=20;
            if(bag<=20 ) {
                lag=1;
                if(doc=='Y') {
                    boarding=1;
                }
            }
            break; 
            case 'I':
                allowance=30;
            if(bag<=30) {
                lag=1;
                if(doc=='Y') {
               boarding=1;
                }  
            } 
            break;
        }
            break; 
        case 'S':
        switch(type) {
            case 'D':
                allowance=25;
            if(bag<=25) {
                lag=1;
                if(doc=='Y') {
                boarding=1;
                }
            } 
            break;
            case 'I':
                allowance=35;
            asi=1;
            if(bag<=35) {
                lag=1;
                if(doc=='Y') {
                boarding=1;
                }
            }
            break;
            }
            break;
        case 'C':
        switch(type) {
            case 'D':
                allowance=30;
            if(bag<=30) {
                lag=1;
                if(doc=='Y') {
                boarding=1;
                }
            } 
            break;
            case 'I':
                allowance=40;
            asi=1;
            if(bag<=40) {
                lag=1;
                if(doc=='Y') {
                boarding=1;
                }
            } 
            break;
            }
            break; 
    }
    
    printf("\nPassenger Category: %c", cat);
    printf("\nDestination Type: %c", type);
    printf("Baggage Allowance: %d", allowance);
    if(lag==1) {
        printf("\nPermitted Baggage Allowance");
    } else {
        printf("\nNon-Permitted Baggage Allowance");
    } 
    printf("\nActual Baggage Weight: %.2f", bag);
    if(doc=='Y') {
        printf("\nDoucments are Valid");
    } else {
        printf("\nDoucments are non-valid");
    }
    switch(veri) {
        case 0:
        printf("\nCategory A");
        break;
        case 1:
        printf("\nCategory B");
        break;
        case 2:
        printf("\nCategory C");
        break;
        case 3:
        printf("\nCategory D");
        break;
        case 4:
        printf("\nCategory E");
        break;
        default:
        printf("\nCategory X");
        break;
    }
    if(asi==1) {
    printf("\nPriority assistance available");
    } else {
        printf("\nPriority assistance not available");
    }
    if(boarding==1) {
        printf("\nPlease proceed to boarding");
    } else {
        if(doc=='Y') {
            printf("\nPlease proceed for enhanced baggage screening");
        } else {
            printf("\nBoarding Denied");
        }
    }
}
