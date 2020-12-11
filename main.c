#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    char number[20];
    printf("Enter number: ");
    scanf("%s", number);

    for (int i = 0; i < strlen(number); ++i) {
        switch (*(number+i)) {
            case '0': {
                printf("nulla");
            }
                break;
            case '1': {
                printf("egy");
            }
                break;
            case '2': {
                printf("ketto");
            }
                break;
            case '3': {
                printf("harom");
            }
                break;
            case '4': {
                printf("negy");
            }
                break;
            case '5': {
                printf("ot");
            }
                break;
            case '6': {
                printf("hat");
            }
                break;
            case '7': {
                printf("het");
            }
                break;
            case '8': {
                printf("nyolc");
            }
                break;
            case '9': {
                printf("kilenc");
            }
                break;
            default:
                printf("Error");
                break;
        }
    }


    return 0;
}