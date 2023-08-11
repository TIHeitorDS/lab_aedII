#include <stdio.h>

int reverseNumber(int n, int reverse) {
    if (n == 0) {
        return reverse;
    } else {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        return reverseNumber(n / 10, reverse);
    }
}

int main() {
    int n, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    reverse = reverseNumber(n, reverse);

    printf("Reversed number = %d", reverse);

    return 0;
}
