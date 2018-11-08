#include <stdio.h>

int check(int number) // bad: need necessary annotation
{
    int i, isPrime = 1;

    for(i = 2; i <= number/2; ++i)
    {
        if(number % i == 0)
        {
            isPrime = 0;
            break;
        }  
    }

    return isPrime;
}

int main() // bad: need necessary annotation
{
    int number, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for(i = 2; i <= number/2; ++i)
    {
        // condition for i to be a prime number
        if (check(i) == 1)
        {
            // condition for number-i to be a prime number
            if (check(number-i) == 1)
            {
                // number = primeNumber1 + primeNumber2
                printf("%d = %d + %d\n", number, i, number - i);
                flag = 1;
            }

        }
    }

    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.", number);

    return 0;
}