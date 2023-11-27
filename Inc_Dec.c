#include<stdio.h>

void main() {
    int a = 37, b = 26, d = 0;

    // printf("\na = %d\tb = %d\n", a, b);

    // printf("Pre Increment: %d\n", ++a);
    // printf("\na = %d\tb = %d\n", a, b);
    
    // printf("Post Increment: %d\n", a++);
    // printf("\na = %d\tb = %d\n", a, b);

    // printf("Pre Decrement: %d\n", --b);
    // printf("\na = %d\tb = %d\n", a, b);

    // printf("Post Decrement: %d\n", b--);
    // printf("\na = %d\tb = %d\n", a, b);

    printf("\na = %d\tb = %d\td = %d\n", a, b, d);
    d = (++a + --b + --a - ++b - --a + b-- + a-- + --a - --b - a-- + b-- + --a + --b + --a + --b + ++a - ++b - b-- + a-- + --a + --b + a-- - b--);

    printf("d = %d\n", d);
    printf("\na = %d\tb = %d\td = %d\n", a, b, d);
}

/*
First the pre increment/decrement is done and then the value is used then after that the post increment/decrement is done.

d = (++a + --b + --a - ++b - --a + b-- + a-- + --a - --b - a-- + b-- + --a + --b + --a + --b + ++a - ++b - b-- + a-- + --a + --b + a-- - b--) 

> a = 37 / b = 26
d = ?
post:   a = ?, b = ?

pre:    a = ?, b = ?
pre a: ++a + --a -> __
pre b: --b + ++b -> __

post:   a = ?, b = ?
post a: a++ + a-- -> __
post b: b++ + b-- -> __

Task:
2. (--a + --b + ++a - ++b + ++a - b-- + a-- + --a - --b - a-- + b-- + --a + --b + --a + --b + ++a - ++b - b-- + a-- + --a + --b + a--) > a = 29 / b = 20


*/