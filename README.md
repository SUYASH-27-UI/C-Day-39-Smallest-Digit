# C-Day-39-Smallest-Digit
# C Day 39 - Smallest Digit

This program finds the smallest digit of a given number.

## Example

Input:

```text
58321
```

Output:

```text
Smallest digit = 1
```

## Concepts Used

* while loop
* if condition
* Modulus operator (%)
* Division operator (/)
* Digit extraction
* Variables

## How It Works

1. Get the last digit using `% 10`.
2. Compare the digit with `smallest`.
3. Update `smallest` if the digit is smaller.
4. Remove the last digit using `/ 10`.
5. Repeat until all digits are checked.

## C Code

```c
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
```
