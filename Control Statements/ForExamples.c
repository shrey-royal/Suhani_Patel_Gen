#include<stdio.h>

void main() {
// --------------------------------------------------------------------------------------------
// -sum of n natural numbers
    // int i, num, sum=0;

    // printf("\nEnter any number: ");
    // scanf("%d", &num);

    // for(i=0 ; i<=num; i++) {
    //     sum = sum + i;
    // }
    // printf("Sum of all numbers till %d is %d", num, sum);
// --------------------------------------------------------------------------------------------
// -power
    int base, i, power, res=1;

    printf("\nEnter base then power: ");
    scanf("%d%d", &base, &power);

    for(int i=1; i<=power; i++) {
        res = res * base;
    }

    printf("\n%d^%d = %d", base, power, res);

}