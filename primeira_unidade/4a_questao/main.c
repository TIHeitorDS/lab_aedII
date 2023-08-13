#include <stdio.h>

int isPerfect(int number)
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