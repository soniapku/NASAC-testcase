#include <stdio.h>
#include <assert.h>

int checkPrimeNumber(int number);
int main()
{
    int start, end, number, flag;

    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end); 
    printf("Prime numbers between %d and %d are: ", start, end);

    for(number=start+1; number<end; ++number)
    {
        // good: caller verify paramter
        assert(number > 0);

        // i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(number);

        if(flag == 1)
            printf("%d ",number);
    }
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int number)
{
    int divisor, flag = 1;

    for(divisor=2; divisor <= number/2; ++divisor)
    {
        if (number%divisor == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
