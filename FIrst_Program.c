/*
Author name: ME
Date of Creation: 21st March 2021
Purpose: Program to understand the basics of C programming language
*/
#include<stdio.h>
#include<stdlib.h>

void main() {
    int a, b;

    system("cls"); //Clears the console screen
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    //Arithmetic Operators
    // printf("%d + %d = %d\n", a, b, a+b);
    // printf("%d - %d = %d\n", a, b, a-b);
    // printf("%d * %d = %d\n", a, b, a*b);
    // printf("%d / %d = %d\n", a, b, a/b);  //return quotient
    // printf("%d (mod) %d = %d\n", a, b, a%b);  //return remainder

    //Relational Operators (returns 0 or 1)
    // printf("%d == %d = %d\n", a, b, a==b);  //equal to
    // printf("%d != %d = %d\n", a, b, a!=b);  //not equal to
    // printf("%d > %d = %d\n", a, b, a>b);    //greater than
    // printf("%d < %d = %d\n", a, b, a<b);    //less than
    // printf("%d >= %d = %d\n", a, b, a>=b);  //greater than or equal to
    // printf("%d <= %d = %d\n", a, b, a<=b);  //less than or equal to

    //Assignment Operators (assign value of right operand to left operand)
    // a = 10-1;
    // a += b;  //a = a*2;
    // printf("a = %d\n", a);

    // system("pause"); //Pauses the console screen


    //Conditional/Ternary Operator
    // (condition)? side 1(true) : side 2 (false)
    // (a>b)?printf("\n%d is greater than %d", a, b) : printf("\n%d is greater than %d", b, a);


    // Logical Operators (1 means true and 0 means false)
    // && (Logical AND), ||(Logical OR), !(Logical NOT)
    /*
        AND (if both conditions are true then only the result is true)

        cond1  cond2   cond1 && cond2
        0       0       0
        0       1       0
        1       0       0
        1       1       1

        OR (if any one of the condition is true then the result is true)

        cond1  cond2   cond1 || cond2
        0       0       0
        0       1       1
        1       0       1
        1       1       1


        NOT (if the condition is true then the result is false and vice versa)

        cond1   !cond1
        0       1
        1       0

    */

    // printf("> %d", (a>b) && (a!=b));
    // printf("> %d", a >= 0 && a <= 10);  //this means a is between 0 and 10 (both inclusive)
    // printf("> %d", a > b || a < b);
    // printf("> %d", !(a==b));


}

/*
7 types of Operators:
1. Arithmetic Operators: +, -, *, /, %
2. Relational Operators: ==, !=, >, <, >=, <=
3. Logical Operators: &&, ||, !
4. Bitwise Operators: &(Bitwise AND), |(Bitwise OR), ^(Bitwise XOR), <<(Left Shift), >>(Right Shift)
5. Assignment Operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
6. Increment/Decrement Operators: ++, --
7. Conditional Operators: ?:


c = a + b;

Operand and Operator:

Operand: The data on which the operation is performed
Operator: The symbol that performs the operation

HomeWork:

10. Decimal 155 -> Binary 10011011
11. Decimal 167 -> Binary 10100111
12. Decimal 182 -> Binary 10110110
13. Decimal 198 -> Binary 11000110
14. Decimal 213 -> Binary 11010101
15. Decimal 226 -> Binary 11100010

https://jamboard.google.com/d/1l1ZI3amOUYcrE1ofRtm1b_JPfwwWOroBPXl5F6JBeJA/viewer?mtt=cvarjy2mg4l4&f=1

Binary to Decimal -> https://www.rapidtables.com/convert/number/binary-to-decimal.html

*/