#include<stdio.h>
#include<stdlib.h>

void main() {
    int a, b;
    char choice;

    system("cls");
    printf("\na) Addition");
    printf("\nb) Subtraction");
    printf("\nc) Multiplication");
    printf("\nd) Division");
    printf("\nEnter your choice: ");
    scanf("%c", &choice);

    printf("\nEnter the value for a and b: ");
    scanf("%d %d", &a, &b); //a=4, b=6

    switch(choice) {
        // case 'A': printf("A");
        // case 'B': printf("B");
        // case 'C': printf("C");
        // case 'D': printf("D");
        case 'a': 
            // printf("E");
            printf("\n%d + %d = %d", a, b, a+b);
            break;
        
        case 'b':
            printf("\n%d - %d = %d", a, b, a-b);
            break;

        case 'c':
            printf("\n%d * %d = %d", a, b, a*b);
            break;

        case 'd':
            printf("\n%d / %d = %d", a, b, a/b);
            break;

        default:
            printf("\nInvalid Choice!");
    }
}

/*
In C programming, the 'switch' statement is a control structure used to perform different actions based on the value of an expression. It provides an efficient way to handle multiple conditions by evaluating an expression and executing the code block associated with a matching case label.

Here's a basic syntax of a 'switch' statement:

switch (expression) {
    case constant1:
        // code to be executed if expression matches constant1
        break;
    case constant2:
        // code to be executed if expression matches constant2
        break;
    // ... more cases
    default:
        // code to be executed if expression doesn't match any case
}


- The 'expression' is evaluated once.
- 'case constant1:' and 'case constant2:' are labels specifying the different cases the expression might match.
- If 'expression' matches a 'case constantX', the code following that 'case' label will be executed until a 'break' statement is encountered, or the 'switch' block ends. The 'break' statement exits the 'switch' block.
- The 'default' case is optional and serves as a catch-all if the 'expression' doesn't match any of the specified cases.

Here's an example:

int choice = 2;

switch (choice) {
    case 1:
        printf("You chose option 1");
        break;
    case 2:
        printf("You chose option 2");
        break;
    case 3:
        printf("You chose option 3");
        break;
    default:
        printf("Invalid choice");
        break;
}


In this example, if 'choice' is 2, the output will be "You chose option 2" because it matches the 'case 2:' label. If 'choice' doesn't match any case, it will execute the code in the 'default' case.

Remember, each 'case' label must end with a 'break' statement, or the execution will continue to the next case until a 'break' is encountered or the end of the 'switch' block is reached, which is known as "falling through."


Code 1:

#include<stdio.h>

void main() {
    int choice, a, b;

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("\nEnter the value for a and b: ");
    scanf("%d %d", &a, &b); //a=4, b=6

    switch(choice) {
        case 1:
            printf("\n%d + %d = %d", a, b, a+b);
            break;
        
        case 2:
            printf("\n%d - %d = %d", a, b, a-b);
            break;

        case 3:
            printf("\n%d * %d = %d", a, b, a*b);
            break;

        case 4:
            printf("\n%d / %d = %d", a, b, a/b);
            break;

        default:
            printf("\nInvalid Choice!");
    }
}


*/