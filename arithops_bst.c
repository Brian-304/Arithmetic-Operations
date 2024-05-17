/*
Brian Tabios
Professor Chowdhury
Week 2 Assignment: Arithmetic Operations
Course: CS111
*/

#include <stdio.h> 

int main() 

{
    double a;
    double b;
    char operator;
    double answer;

    printf("Enter operator (+ - * / %): ");
    scanf("%c", &operator);


    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (operator) 
    {
    case '+':
        printf("Answer is: %.1lf", a + b);
        break;
    case '-':
        printf("Answer is: %.1lf", a - b);
        break;
    case '*':
        printf("Answer is: %.1lf", a * b);
        break;
    case '/':
        printf("Answer is: %.1lf", a / b);
        break;
    default:
        break;

    }

    return 0;


}