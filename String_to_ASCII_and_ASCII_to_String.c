#include <stdio.h>

// Function prototypes
void ASCII_to_string();
void string_to_ASCII();
void again();

int main() {
    again();
    return 0;
}

void again() {
    printf("1) String to ASCII\n2) ASCII to String\n3) Exit\n");
    printf("Enter your choice: ");
    int c;
    scanf("%d", &c);
    getchar(); // Consume the newline character left by scanf
    switch (c) {
        case 1:
            string_to_ASCII();
            break;
        case 2:
            ASCII_to_string();
            break;
        case 3:
            return;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void string_to_ASCII() {
    //system("cls");
    char str[100];
    printf("Enter a sentence: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);
    printf("Converted to ASCII code: ");
    for (int i = 0; i<str[i] != '\0'; i++) {
        printf("%d ", str[i]);
    }
    printf("\n\n");
    again();
}

void ASCII_to_string() {
    //system("cls");
    char ascii[100000];
    printf("Enter ASCII values separated by spaces: \n");
    fflush(stdin);
    fgets(ascii, sizeof(ascii), stdin);
    
    int num = 0;
    for (int i = 0; ascii[i] != '\0'; i++) {
        if (ascii[i] >= '0' && ascii[i] <= '9') {
            num = num * 10 + (ascii[i] - '0');
        } else if (ascii[i] == ' ' || ascii[i] == '\n') {
            if (num != 0) {
                printf("%c", num);
                num = 0;
            }
        }
    }
    // Print the last number if there is no space at the end
    if (num != 0) {
        printf("%c", num);
    }
    printf("\n\n");
    again();
}
