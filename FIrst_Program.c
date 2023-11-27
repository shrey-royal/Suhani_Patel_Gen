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
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);  //return quotient
    printf("%d (mod) %d = %d\n", a, b, a%b);  //return remainder

    //Relational Operators (returns 0 or 1)
    printf("%d == %d = %d\n", a, b, a==b);  //equal to
    printf("%d != %d = %d\n", a, b, a!=b);  //not equal to
    printf("%d > %d = %d\n", a, b, a>b);    //greater than
    printf("%d < %d = %d\n", a, b, a<b);    //less than
    printf("%d >= %d = %d\n", a, b, a>=b);  //greater than or equal to
    printf("%d <= %d = %d\n", a, b, a<=b);  //less than or equal to

    //Assignment Operators (assign value of right operand to left operand)
    // a = 10-1;
    // a += b;  //a = a*2;
    // printf("a = %d\n", a);

    // system("pause"); //Pauses the console screen
}

/*
7 types of Operators:
1. Arithmetic Operators: +, -, *, /, %
2. Relational Operators: ==, !=, >, <, >=, <=
3. Logical Operators: &&, ||, !
4. Bitwise Operators: &, |, ~, ^, <<, >>
5. Assignment Operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
6. Increment/Decrement Operators: ++, --
7. Conditional Operators: ?:


c = a + b;

Operand and Operator:

Operand: The data on which the operation is performed
Operator: The symbol that performs the operation

*/