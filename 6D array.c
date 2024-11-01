#include <stdio.h>

int main() {
    int a[5][4][20][10][8][9];
    int i, j, k, l, m, n;

    // Initializing the array
    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 20; k++)
                for (l = 0; l < 10; l++)
                    for (m = 0; m < 8; m++)
                        for (n = 0; n < 9; n++) {
                            a[i][j][k][l][m][n] = i + j + k + l + m + n;
                        }

    // Printing the array
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 20; k++) {
                for (l = 0; l < 10; l++) {
                    for (m = 0; m < 8; m++) {
                        for (n = 0; n < 9; n++) {
                            printf("%d\t", a[i][j][k][l][m][n]);
                        }
                        printf("\n");
                    }
                    printf("------------\n");
                }
                printf("##############\n");
            }
            printf("******\n");
        }
        printf("!!!!!!!!!!!!!!\n");
    }

    return 0;
}