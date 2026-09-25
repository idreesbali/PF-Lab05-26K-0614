#include <stdio.h>
int main() {
    printf("1. Computer Science\n2. Electrical Engineering\n3. Business Administration\n4. Mathematics\n");
    printf("Enter your choice(1-4):");
    int choice;
    scanf("%d", &choice);
    if(choice!=1 && choice!=2 && choice!=3 && choice!=4) {
        printf("Invalid Choice");
        return 0;
    }
    printf("Enter your marks in theory examinations: ");
    float m1;
    scanf("%f", &m1);
    printf("Enter your marks in practicals: ");
    float m2;
    scanf("%f", &m2);
    printf("Enter your attendance(%%): ");
    float attendance;
    scanf("%f", &attendance);
    switch(choice) {
        case 1:
            printf("Selected Department: Computer science");
            printf("\nattendance: %.2f", attendance);
            printf("\nTheory: %.2f", m1);
            printf("\nPracticals: %.2f", m2);
            printf("\nStatus: %s", (m1>=50 && m2>=40 && attendance>=75)? "Passed": "Failed");
            break;
        case 2:
            printf("Selected Department: Electrical Engineering");
            printf("\nattendance: %.2f", attendance);
            printf("\nTheory: %.2f", m1);
            printf("\nPracticals: %.2f", m2);
            printf("\nStatus: %s", (m1>=55 && m2>=45 && attendance>=75)? "Passed": "Failed");
            break;
        case 3:
            printf("Selected Department: Business Administration");
            printf("\nattendance: %.2f", attendance);
            printf("\nTheory: %.2f", m1);
            printf("\nPracticals: %.2f", m2);
            printf("\nStatus: %s", (m1>=50 && m2>=35 && attendance>=80)? "Passed": "Failed");
            break;
        case 4:
            printf("Selected Department: Mathematics");
            printf("\nattendance: %.2f", attendance);
            printf("\nTheory: %.2f", m1);
            printf("\nPracticals: %.2f", m2);
            printf("\nStatus: %s", (m1>=60 && m2>=40 && attendance>=75)? "Passed": "Failed");
            break;
    } 
    printf("\nDistinction: %s", (m1>=85 && m2>=80 && attendance>=90)? "Eligible":"Not Eligible");
    int seat = (int) m1 % 3;
    switch(seat) {
        case 0:
            printf("\nSeat Category: A");
        break;
        case 1:
            printf("\nSeat Category: B");
        break;
        case 2:
            printf("\nSeat Category: C");
        break;
    }
    return 0;

}