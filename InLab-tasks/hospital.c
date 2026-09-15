#include <stdio.h>

int main() {

    int dep;
    int age;
    int heart;
    int severity;
    float temp;
    char con;

    printf("1. General Emergency\n");
    printf("2. Cardiology\n");
    printf("3. Neurology\n");
    printf("4. Trauma\n");

    printf("Enter patient's emergency department from the available departments (1/2/3/4): ");
    scanf("%d", &dep);

    printf("Enter patient's age: ");
    scanf("%d", &age);

    printf("Enter patient's heart rate: ");
    scanf("%d", &heart);

    printf("Enter patient's body temperature: ");
    scanf("%f", &temp);

    printf("Is patient conscious (Y/N): ");
    scanf(" %c", &con);

    printf("Enter severity level (1-5): ");
    scanf("%d", &severity);

    int critical = 0;
    int senior = 0;
    int temp_alert = 0;
    int dep_priority = 0;

  
    critical = ((heart < 50 || heart > 120) && con == 'N') ? 1 : 0;

   
    senior = (age >= 65) ? 1 : 0;

    /* Temperature alert */
    temp_alert = (temp < 36 || temp > 38) ? 1 : 0;


  
    switch(dep) {

        case 1:
        
            switch(critical) {
                case 1:
                    dep_priority = 1;
                    break;

                case 0:
                    dep_priority = 0;
                    break;
            }
            break;


        case 2:
          
            switch((heart < 50 || heart > 120) ? 1 : 0) {

                case 1:
                    dep_priority = 1;
                    break;

                case 0:
                    dep_priority = 0;
                    break;
            }
            break;


        case 3:
          
            switch(con == 'N' ? 1 : 0) {

                case 1:
                    dep_priority = 1;
                    break;

                case 0:
                    dep_priority = 0;
                    break;
            }
            break;


        case 4:
          
            switch(severity >= 4 ? 1 : 0) {

                case 1:
                    dep_priority = 1;
                    break;

                case 0:
                    dep_priority = 0;
                    break;
            }
            break;
    }


  
    int case_num = (age + heart) % 4;

    char case_cat;

    switch(case_num) {

        case 0:
            case_cat = 'A';
            break;

        case 1:
            case_cat = 'B';
            break;

        case 2:
            case_cat = 'C';
            break;

        case 3:
            case_cat = 'D';
            break;
    }


    

    printf("\n\nPatient Emergency Status");

    printf("\nDepartment: ");

    switch(dep) {

        case 1:
            printf("General Emergency");
            break;

        case 2:
            printf("Cardiology");
            break;

        case 3:
            printf("Neurology");
            break;

        case 4:
            printf("Trauma");
            break;
    }


    printf("\nCritical Condition: ");

    if(critical == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }


    printf("\nDepartment-Specific Priority: ");

    if(dep_priority == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }


    printf("\nSenior Priority Status: ");

    if(senior == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }


    printf("\nTemperature Alert: ");

    if(temp_alert == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }


    printf("\nCase Category: %c", case_cat);



    if(critical == 1) {

        printf("\nFinal Triage Decision: Immediate Medical Attention");

    }
    else if(dep_priority == 1 || senior == 1 || temp_alert == 1) {

        printf("\nFinal Triage Decision: Priority Further Assessment");

    }
    else {

        printf("\nFinal Triage Decision: Routine Medical Assessment");
    }


    return 0;
}