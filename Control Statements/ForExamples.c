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
    // int base, i, power, res=1;

    // printf("\nEnter base then power: ");
    // scanf("%d%d", &base, &power);

    // for(int i=1; i<=power; i++) {
    //     res = res * base;
    // }

    // printf("\n%d^%d = %d", base, power, res);

// --------------------------------------------------------------------------------------------
// -armstrong number
    int num, temp, sum=0, rem;

    printf("\nEnter any integer: ");
    scanf("%d", &num);

    temp = num; //copy generated

    for(;num>0;) {
        rem = num % 10;             //getting last digit
        sum = sum + rem*rem*rem;    //adding the cube of the last digit into the sum variable
        num = num / 10;             //remove last digit from the number
        // printf("\nsum = %d\trem = %d", sum, rem);
    }

    if(sum == temp) {
        printf("\n%d is an Armstrong Number", temp);
    } else {
        printf("\n%d is not an Armstrong Number", temp);
    }



}

