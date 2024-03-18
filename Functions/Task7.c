#include<stdio.h>

float avg(int a, int b) {
    return (a+b)/2;
}

int main() {
    int num1, num2;

    printf("\nEnter num1: ");
    scanf("%d", &num1);

    printf("\nEnter num2: ");
    scanf("%d", &num2);

    float ans = avg(num1, num2);

    printf("Average of %d and %d is %f", num1, num2, ans);

    return 0;
}