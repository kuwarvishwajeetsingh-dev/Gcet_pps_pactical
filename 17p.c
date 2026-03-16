// Program to write a function that takes a decimal number and returns the binary equivalent of that number.and vice versa.
#include <stdio.h>
#include <string.h>
void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
int binaryToDecimal(int n) {
    int decimalNum = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimalNum += rem * (2**i);
        ++i;
    }
    return decimalNum;
}
int main() {
    int decimalNumber, binaryNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("Binary equivalent: ");
    decimalToBinary(decimalNumber);
    printf("\nEnter a binary number: ");
    scanf("%d", &binaryNumber);
    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));
    return 0;
}