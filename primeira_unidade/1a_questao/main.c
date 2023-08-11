#include <stdio.h>

int main()
{
    int start = 0;
    int end = 127;
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        printf("'%c' ", (char)i);
        count++;
        if (count == 10)
        {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}
