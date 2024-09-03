//Total number of prime numbers below 1,000,000 have the sum of their digits equal to 14.//
#include <stdio.h>
int sum_of_digits(int x) {
    int sum = 0;
    while (x> 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int i, j, count = 0;
    int isPrime;
    for (i = 2; i <= 100000; i++) {
        isPrime = 1; //Assuming number is prime.//
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1 && sum_of_digits(i) == 14) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
