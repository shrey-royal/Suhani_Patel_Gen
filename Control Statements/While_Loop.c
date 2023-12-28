#include<stdio.h>

void main() {
    int i, start, end;

    printf("\nEnter starting range: ");
    scanf("%d", &start);

    printf("\nEnter ending range: ");
    scanf("%d", &end);

    i=start;
    while(i<=end) {
        if(i%2 != 0) {
            printf("%d, ", i);
        }
        i++;
    }
    
    
}

/*
While loops are used when there is'nt any fixed number of iterations

syntax:
    // intialization (optional)
    while(condition) {
        body of the loop

        //inc-dec (optional)
    }
*/