#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("Enter Number: ");
    scanf("%d", &number);
    printf("**----------------------------**\n");

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("Your Factorial Number is: %d ", factorial);

    return 0;
}