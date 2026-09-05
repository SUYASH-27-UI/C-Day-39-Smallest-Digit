#include <stdio.h>

int main()
{
    int num, digit;
    int smallest = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit < smallest)
        {
            smallest = digit;
        }

        num = num / 10;
    }

    printf("Smallest digit = %d", smallest);

    return 0;
}
