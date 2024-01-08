
#include<stdio.h>
#include<math.h>

// > WAP to print series as 1 + x^1 + x^2 + x^3 +x^4…..x^n
// Output:-
// Enter value of x and n: 2, 2
// Sum is 7.

// void main() {
//     int n, x, i,  term=1, sum=1;

//     printf("\nEnter value of x and n: ");
//     scanf("%d %d", &n, &x);

//     for(i=0; i<=n; i++) {
//         sum = sum + pow(x, i);
//     }

//     printf("\nSum is %d", sum);
// }



// > WAP to print series as 1-3+5-7+9……n
// Output:- 
// Enter one value : 7
// Sum of series is 4

void main() {
    int i, n, flag=1, sum=0;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2) {
        if(flag) {
            sum -= i;
            flag = 0;
        } else {
            sum += i;
            flag = 1;
        }
    }
    printf("\nSum of series is %d", sum);
}