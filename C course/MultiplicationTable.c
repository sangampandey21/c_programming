#include<stdio.h>
int main() {
    int number, i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Multiplication table for %d is given below:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
