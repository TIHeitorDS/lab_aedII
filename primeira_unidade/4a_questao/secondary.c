#include <stdio.h>

void showFactors(int num)
{
    for (int i = num - 1; i >= 1; i--)
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
        int aux = 0;
        int dividend = number - 1;
        for (int i = dividend; i >= 1; i--)
        {
            if (number % i == 0)
            {
                aux += i;
            }
        }
        if (aux == number)
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
