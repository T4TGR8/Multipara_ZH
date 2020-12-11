#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void gotoxy (int x, int y)
{
    COORD CRD;
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD);
}

void clrscr()
{
    system("@cls||clear");
}

int main() {
    clrscr();
    char number[20];
    printf("Enter number: ");
    scanf("%s", number);

    for (int i = 0; i < strlen(number); ++i) {
        switch (*(number+i)) {
            case '1': {
                printf(" \n");
                printf(" |\n");
                printf(" |\n");
            }
                break;
            case '2': {
                printf(" _\n");
                printf(" _|\n");
                printf("|_ \n");
            }
                break;
            case '3': {
                printf("_\n");
                printf("_|\n");
                printf("_|\n");
            }
                break;
            case '4': {
                printf(" \n");
                printf("|_|\n");
                printf("  |\n");
            }
                break;
            case '5': {
                printf(" _\n");
                printf("|_\n");
                printf(" _|\n");
            }
                break;
            case '6': {
                printf(" _\n");
                printf("|_\n");
                printf("|_|\n");
            }
                break;
            case '7': {
                printf("_\n");
                printf(" |\n");
                printf(" |\n");
            }
                break;
            case '8': {
                printf(" _\n");
                printf("|_|\n");
                printf("|_|\n");
            }
                break;
            case '9': {
                printf(" _\n");
                printf("|_|\n");
                printf(" _|\n");
            }
                break;
            default:
                printf("Error");
                break;
        }
    }
    return 0;
}