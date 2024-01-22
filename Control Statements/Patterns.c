#include<stdio.h>

void main() {
    int i, j;   //Iterator Variable
    int row=5, col=5;

    // printf("\nEnter the number of rows: ");
    // scanf("%d", &row);
    // printf("\nEnter the number of cols: ");
    // scanf("%d", &col);

    // for(i=0; i<5; i++) {
    //     printf("\ni = %d\tj = ", i);
    //     for (j = 0; j < 5; j++) {
    //         printf("%d, ", j);
    //     }
    // }

    printf("\n\n");
    for (i = 0; i < row; i++) {       //outer loop responsible for rows
        for (j = 0; j < col; j++) {   //inner loop responsible for columns
            printf("(%d, %d), ", i, j);
        }
        printf("\n");
    }

    printf("\n\n");
    for (i = 0; i < row; i++) {       //outer loop responsible for rows
        for (j = 0; j < col; j++) {   //inner loop responsible for columns
            if(i == 0 || j == 0 || i == 4 || j == 4) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    

}

/*
Task:

* * * * *
* *     *
*   *   *
*     * *
* * * * *

*/