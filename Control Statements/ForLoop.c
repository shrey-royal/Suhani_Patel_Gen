/*
Loops: Used to execute same set of statements multiple times (until the condition get satisfied)

3 types of loops: for loop / while loop / do while loop

entry controlled loops : for loop / while loop
> conditions will be checked before the body gets executed

steps of execution: 

1. intialization (happens only once)
2. condition
3. body of the loop
4. increment/decrement


exit controlled loops : do while loop
> conditions will be checked after the body gets executed


syntax:
    for(intialization; condition; increment/decrement) {
        //body of the loop
    }

Iterator Variable: it is responsible for the execution of the loop
Iteration: it is when a body of the loop gets executed successfully.


*/

#include<stdio.h>

void main() {
    int i;  //Iterator variable

    // for(i=0; i<=10; i++) {
    //     printf("\ni = %d", i);
    // }

    // printf("\nValue of i after the loop: %d", i);

    for (i=10; i>=0; i--) {
        printf("\ni = %d", i);
    }

}