#include <stdio.h>
int main() {
    int selected=0;
    int MAIN_DOOR=1;
    int ALARM=2;
    int CCTV=4;
    int SENSOR=8;
    int mode;
    int type;
    printf("1. Activate a device\n2. Deactivate a device\n3. Check the status of a device\n4. Toggle device\n5. Select Security Mode\n");
    printf("Enter your choice(1-5): ");
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        printf("1. Main door lock\n2. Alarm system\n3. CCTV camera\n4. Motion Sensor\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &type);
        switch(type) {
            case 1:
                selected= selected | MAIN_DOOR;
                break;
            case 2:
                selected = selected | ALARM;

                break;
            case 3:
                selected= selected | CCTV;

                break;
            case 4:
                selected= selected | SENSOR;

                break;
            default:
                printf("\nInvalid choice");
                return 0;
                break;
        }
        break;
        case 2:
        printf("1. Main door lock\n2. Alarm system\n3. CCTV camera\n4. Motion Sensor\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &type);
        switch(type) {
            case 1:
                selected= selected & ~MAIN_DOOR;

                break;
            case 2:
                selected = selected & ~ALARM;

                break;
            case 3:
                selected= selected & ~CCTV;

                break;
            case 4:
                selected= selected & ~SENSOR;

                break;
            default:
                printf("\nInvalid choice");
                return 0;
                break;
        }
        break;
        case 3:
        printf("1. Main door lock\n2. Alarm system\n3. CCTV camera\n4. Motion Sensor\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &type);
        switch(type) {
            case 1:
                if((selected & MAIN_DOOR) != 0) {
                    printf("Main door lock is activated");
                } else {
                    printf("Main door lock is not activated");
                }
            break;
            case 2:
                if((selected & ALARM) != 0) {
                    printf("Alarm is activated");
                } else {
                    printf("Alarm is not activated");
                }
            break;
            case 3:
                if((selected & CCTV) != 0) {
                    printf("CCTV is activated");
                } else {
                    printf("CCTV is not activated");
                }
            break;
            case 4:
                if((selected & SENSOR) != 0) {
                    printf("Motion sensor is activated");
                } else {
                    printf("Motion sensor is not activated");
                }
            break;
            default:
                printf("Invalid input");
                return 0;
                break;
        }
    break;
    
        case 4:
        printf("1. Main door lock\n2. Alarm system\n3. CCTV camera\n4. Motion Sensor\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &type);
        switch(type) {
            case 1:
                selected= selected ^ MAIN_DOOR;
                break;
            case 2:
                selected = selected ^ ALARM;
                break;
            case 3:
                selected= selected ^ CCTV;
                break;
            case 4:
                selected= selected ^ SENSOR;
                break;
            default:
                printf("\nInvalid choice");
                return 0;
                break;
        }
        break;  
        case 5:
            printf("\nSecurity mode(1-Home Mode/2-Away Mode/3-Night Mode): ");
            scanf("%d", &mode);
            switch(mode) {
                case 1:
                    selected = selected | MAIN_DOOR | CCTV;
                break;
                case 2:
                    selected = selected | CCTV | ALARM | SENSOR | MAIN_DOOR;
                break;
                case 3:
                    selected = selected | MAIN_DOOR | ALARM | SENSOR;
                break;
                default:
                    printf("Invalid Choice");
                    return 0;
                    break;
            }
            break;
        default:
            printf("\nInvalid Choice");
            return 0;
            break;
    } 
    printf("\nBinary Status: ");
    printf("%d", (selected >> 3) & 1);
    printf("%d", (selected >> 2) & 1);
    printf("%d", (selected >> 1) & 1);
    printf("%d", selected & 1);
    printf("\nMain door lock: %s", (selected & MAIN_DOOR)? "Active" : "Not Active");
    printf("\nAlarm: %s", (selected & ALARM)? "Active" : "Not Active");
    printf("\nCCTV Camera: %s", (selected & CCTV)? "Active" : "Not Active");
    printf("\nMotion Sensor: %s", (selected & SENSOR)? "Active" : "Not Active");

    if(((selected & MAIN_DOOR) && 
        (selected & ALARM) && 
        (selected & SENSOR) && 
        (selected & CCTV)) != 0) {
        printf("\nComplete security system is armed");
    } else {
        printf("\nComplete security system is not armed");
    }
    return 0;
}