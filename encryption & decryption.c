#include <stdio.h>

int main() {
    int i, n, option;
    char str[100];

    printf("Enter something: ");
    scanf("%s", str);

    printf("Enter a key password: ");
    scanf("%d", &n);

    printf("Enter 1 for encryption or 2 for decryption: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            for (i = 0; str[i] != '\0'; i++) {
                str[i] = (str[i] + n) % 256; // Use modular arithmetic to keep within ASCII range
            }
            printf("\nEncrypted data is: %s", str);
            break;
        case 2:
            for (i = 0; str[i] != '\0'; i++) {
                str[i] = (str[i] - n + 256) % 256; // Use modular arithmetic to keep within ASCII range
            }
            printf("\nDecrypted data is: %s", str);
            break;
        default:
            printf("Error: Invalid option\n");
    }

    return 0;
}
