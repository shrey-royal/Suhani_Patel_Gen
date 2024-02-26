#include<stdio.h>

//Function declaration
void add();             //without return type and without argument
int sub();              //with return type and without argument
void mul(int, int);     //without return type and with argument
float div(int x, int y) {    //with return type and with arguments
    return (float)x/(float)y;
}

int main() {
    int f, c;

    printf("\nEnter f & c: ");
    scanf("%d %d", &f, &c);


    //Function calling
    // add();
    // printf("\nSubtraction: %d", sub());
    // mul(f, c);  // mul(2, 3);
    printf("\nDivision: %.2f", div(f, c));

    return 0;
}

//Function Defination
void add() {
    int a, b;
    printf("\nEnter a & b: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition of %d + %d = %d", a, b, a+b);
}

int sub() {
    int a, b;
    printf("\nEnter a & b: ");
    scanf("%d %d", &a, &b);
    // ans = a-b;
    return a-b;
}

void mul(int a, int b) {
    printf("\nMultiplication of %d * %d = %d", a, b, a*b);
}

/*
Functions: collection of statements to execute together when calling it.

Four Types of Functions: (return type - output and arguments - input)
1. without return types and without arguments 
2. with return types and without arguments 
3. without return types and with arguments 
4. with return types and with arguments

> Function Declaration: here we will declare the type of function
> Function Call: here we will use the function
> Function Definition: here we will make/define the function body (we can define a function while declaration)

Function Syntax:

return_type function_name(argument_list) {
    //body of the function
    return 0;
}

*/