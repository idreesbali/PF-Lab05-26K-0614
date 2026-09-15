#include <stdio.h>

int main() {

    int boarding = 0, lag = 0, asi = 0, allowance = 0;

    printf("Enter passenger category (A for adult, S for student, C for senior citizen): ");
    char cat, type;
    float bag;

    scanf(" %c", &cat);

    printf("Domestic / International flights (D/I): ");
    scanf(" %c", &type);

    printf("Enter baggage weight: ");
    scanf("%f", &bag);

    printf("Are your documents valid (Y/N): ");
    char doc;
    scanf(" %c", &doc);

    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

  
    int veri = age % 5;

    switch(cat) {

        case 'A':
            switch(type) {

                case 'D':
                    allowance = 20;

                    if (bag <= allowance) {
                        lag = 1;

                        if (doc == 'Y') {
                            boarding = 1;
                        }
                    }
                    break;

                case 'I':
                    allowance = 30;

                    if (bag <= allowance) {
                        lag = 1;

                        if (doc == 'Y') {
                            boarding = 1;
                        }
                    }
                    break;
            }
            break;


        case 'S':
            switch(type) {

                case 'D':
                    allowance = 25;

                    if (bag <= allowance) {
                        lag = 1;

                        if (doc == 'Y') {
                            boarding = 1;
                        }
                    }
                    break;

                case 'I':
                    allowance = 35;

                    if (bag <= allowance) {
                        lag = 1;

                        if (doc == 'Y') {
                            boarding = 1;
                        }
                    }
                    break;
            }
            break;


        case 'C':
            switch(type) {

                case 'D':
                    allowance = 30;

                    if (bag <= allowance) {
                        lag = 1;

                        if (doc == 'Y') {
                            boarding = 1;
                        }
                    }
                    break;

                case 'I':
                    allowance = 40;

                    if (bag <= allowance) {
                        lag = 1;

                        if (doc == 'Y') {
                            boarding = 1;
                        }
                    }
                    break;
            }
            break;
    }


    
    asi = (cat == 'C' || (cat == 'S' && type == 'I')) ? 1 : 0;


    printf("\nPassenger Category: %c", cat);
    printf("\nDestination Type: %c", type);
    printf("\nBaggage Allowance: %d kg", allowance);

    if (lag == 1) {
        printf("\nPermitted Baggage Allowance");
    }
    else {
        printf("\nNon-Permitted Baggage Allowance");
    }

    printf("\nActual Baggage Weight: %.2f kg", bag);

    if (doc == 'Y') {
        printf("\nDocuments are Valid");
    }
    else {
        printf("\nDocuments are Non-Valid");
    }


 
    switch(veri) {

        case 0:
            printf("\nVerification Category: A");
            break;

        case 1:
            printf("\nVerification Category: B");
            break;

        case 2:
            printf("\nVerification Category: C");
            break;

        case 3:
            printf("\nVerification Category: D");
            break;

        case 4:
            printf("\nVerification Category: E");
            break;
    }


    if (asi == 1) {
        printf("\nPriority Assistance Available");
    }
    else {
        printf("\nPriority Assistance Not Available");
    }


    if (boarding == 1) {
        printf("\nPlease Proceed to Normal Boarding");
    }
    else {

        if (doc == 'N') {
            printf("\nBoarding Denied");
        }
        else {
            printf("\nPlease Proceed for Enhanced Baggage Screening");
        }
    }

    return 0;
}