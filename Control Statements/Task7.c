#include<stdio.h>

void main() {
    int height;

    printf("\nEnter your height: ");
    scanf("%d", &height);

    if(height <= 100)    printf("\nThe person is Dwarf.");
    else if(height > 100 && height <= 150)    printf("\nThe person is Normal.");
    else if(height > 150)    printf("\nThe person is Tall.");
}