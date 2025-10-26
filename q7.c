#include <stdio.h>

int main() {
    int rows;
    char ch;
    int i,j,k;

    printf("Enter number of rows 1 to 26: ");
    scanf("%d", &rows);

    if (rows < 1 || rows > 26) {
        printf("Please enter a number between 1 and 26.\n");
        return 1;
    }

    
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }

        ch = 'A';
        for ( k = 1; k <= i; k++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}

