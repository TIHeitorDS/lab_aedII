#include <stdio.h>

void showFactors(int num)
{
    int i;
    for (i = num - 1; i >= 1; i--)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void isPerfect()
{
    for (int number = 1; number <= 1000; number++)
    {
        int sumFactors = 0;
        int i;
        for (i = number - 1; i >= 1; i--)
        {
            if (number % i == 0)
            {
                sumFactors += i;
            }
        }
        if (sumFactors == number)
        {
            printf("%d is perfect! Factors: ", number);
            showFactors(number);
        }
    }
}

int main()
{
    isPerfect();
    return 0;
}
