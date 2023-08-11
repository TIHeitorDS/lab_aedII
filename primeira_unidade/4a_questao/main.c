#include <stdio.h>

int isPerfect(int number)
{
    int dividend = number - 1;
    int aux = 0;
    for (int i = dividend; i >= 1; i--)
    {
        if (number % i == 0)
        {
            aux += i;
        }
    }
    if (aux == number)
    {
        return 1;
    }
    return 0;
}
    
int main()
{
    int number;
    int factor;
    printf("type a number: ");
    scanf("%d", &number);
    factor = isPerfect(number);
    if (factor)
    {
        printf("%d is perfect!", number);
    }
    else
    {
        printf("%d is not perfect!", number);
    }
    return 0;
}