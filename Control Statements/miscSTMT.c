// continue, break, goto

#include<stdio.h>

void main() {
    int i, number;

    // continue statement
    // for(i=0; i<5; i++) {
    //     if(i == 3) {
    //         continue;   //skip
    //     }
    //     printf("\ni = %d", i);
    // }

    // break statement
    // printf("\n\n");
    // for(i=0; i<5; i++) {
    //     if(i == 3) {
    //         break;   //exit the loop
    //     }
    //     printf("\ni = %d", i);
    // }

    retry:  //label_name
    printf("\nEnter a positive number: ");
    scanf("%d", &number);

    if(number <= 0) {
        printf("\nError: Please enter a positive number.");
        goto retry; //goto label_name;  //Jump back to the retry label
    }

    printf("\nYou Entered: %d", number);
    
}

/*
continue: it is used to skip the current iteration of the loop.
break: it will break the loop.
goto: it helps in jumping inside the program.
*/