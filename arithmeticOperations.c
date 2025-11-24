#include <stdio.h>
int main()
{
    int plus, minus, times, divide;
    int a, b;
    printf("Enter Number: ");
    scanf("%d", &a);
    printf("Enter Number: ");
    scanf("%d", &b);
    
    printf("**-----------------------------**\n");

    plus = a + b;
    printf("plus = %d\n", plus);

    minus = a - b;
    printf("minus = %d\n", minus);

    times = a * b;
    printf("times = %d\n", times);

    divide = a / b;
    printf("divide = %d\n", divide);

    return 0;
}