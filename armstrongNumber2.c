#include <stdio.h>
void checkArmstrong(int number)
{
    int sum = 0;
    int value = number;

    while (number > 0)
    {
        int temp = number % 10;
        sum += temp * temp * temp;
        number = number / 10;
    }
    if (sum == value)
    {
        printf("This Number is Armstrong Number\n");
    }
    else
    {
        printf("This Number is Normal Number");
    }
}
int main()
{
    checkArmstrong(153);
    checkArmstrong(13);
    return 0;
}