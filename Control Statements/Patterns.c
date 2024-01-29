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
            if(i == 0 || i == 4 || j == 0 || j == 4 || i==j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    

}

/*

(0, 0), (0, 1), (0, 2), (0, 3), (0, 4), 
(1, 0), (1, 1), (1, 2), (1, 3), (1, 4), 
(2, 0), (2, 1), (2, 2), (2, 3), (2, 4), 
(3, 0), (3, 1), (3, 2), (3, 3), (3, 4), 
(4, 0), (4, 1), (4, 2), (4, 3), (4, 4), 




* * * * *
* *     *
*   *   *
*     * *
* * * * *

Task:

  * * * *
*   * * *
* *   * *
* * *   *
* * * *

*/