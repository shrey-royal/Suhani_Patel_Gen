#include<stdio.h>

void main() {
    int i, n=20;

    // printf("\nEnter any value of n: ");
    // scanf("%d", &n);

    i=0;    //initialization
    printf("\nlist = ( ");
    do {
        // printf("\ni = %d", i);  //body
        printf("%d, ", i);
        i++;    //increment/decrement
    } while(i<n);
    printf("\b\b )");
}

/*
do while loop: used when we want the body to be executed at least one time. (exit controlled loop)
syntax:
    //intialization
    do {
        //body

        //increment/decrement
    } while(condition);

*/