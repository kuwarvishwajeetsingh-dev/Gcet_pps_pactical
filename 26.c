// write Program to print different patern using loop
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);

    // Pattern 1: Right-angled triangle
    printf("Pattern 1: Right-angled triangle\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 2: Inverted right-angled triangle
    printf("Pattern 2: Inverted right-angled triangle\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 3: Pyramid
    printf("Pattern 3: Pyramid\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    // inverted pyramid
    printf("Pattern 4: Inverted Pyramid\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    // diamond
    printf("Pattern 5: Diamond\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
        
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
// hollow square
    printf("Pattern 6: Hollow Square\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
   
// hollow triangle
    printf("Pattern 7: Hollow Triangle\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}