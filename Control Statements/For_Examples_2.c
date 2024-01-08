// > WAP to print series as 1 + x^1 + x^2 + x^3 +x^4…..x^n
// Output:-
// Enter value of x and n: 2, 2
// Sum is 7.

#include<stdio.h>
#include<math.h>

void main() {
    int n, x, i,  term=1, sum=1;

    printf("\nEnter value of x and n: ");
    scanf("%d %d", &n, &x);

    for(i=0; i<=n; i++) {
        sum = sum + pow(x, i);
    }

    printf("\nSum is %d", sum);
}