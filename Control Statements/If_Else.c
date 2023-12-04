/*
If_else statements: used to control the flow of any program

> the type of conditions that will be used in these statements will only return the boolean type (boolean type -> true(1) / false(0))

4 types of if else statements:

1. If statement
syntax:
    if(condition) {
        //body of if 
    }

2. If else statement
syntax:
    if(condition) {
        //body of if 
    } else {
        //body of else
    }

3. if else if (ladder elseif) statement
syntax:
    if(condition 1) {
        //body of if 
    } else if(condition 2) {
        //body of else if
    } else if(condition 3) {
        //body of else if
    } else if(condition 4) {
        //body of else if
    }
    .
    .
    .
    else {  (optional)
        //body of else 
    }

4. nested if else statement
syntax:
    if(condition) {
        //body of if
        if(cond) {
            //body of inner if
        }
    } else {
        //body of else
        if(cond) {
            //body of inner if
        }
    }

*/

#include<stdio.h>
#include<stdlib.h>  //standard library header file - for system();

void main() {
    char ch;

    system("cls");

    printf("\nEnter any character: ");
    scanf("%c", &ch);
    
    // if(age >= 18) {
    //     printf("\nYou are an Adult");
    // } else {
    //     printf("\nYou are not an Adult");
    // }

    // if(num1 == num2) {
    //     printf("\nBoth are Equal.");
    // } else {
    //     printf("\nBoth are not Equal.");
    // }

    // if(m>0) {
    //     n = 1;
    // } else if(m == 0) {
    //     n = 0;
    // } else if(m<0) {
    //     n = -1;
    // }
    // printf("\nn = %d", n);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("\nEntered character is a Vowel");
        } else {
            printf("\nEntered character is an Consonant");
        }
    } else {
        printf("\nPlease enter a valid character");
    }
}

/*
Task: 13, 7, 9, 19
*/