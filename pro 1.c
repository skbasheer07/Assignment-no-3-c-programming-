#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main()
{
    int start, end, i;
    bool prime;

    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for(i=start+1; i<end; i++)
    {
        prime = isPrime(i);

        if(prime)
            printf("%d ", i);
    }

    return 0;
}

bool isPrime(int num)
{
    int i;

    if(num < 2)
        return false;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

