#include <stdio.h>
#include <math.h>

long long largest_prime_factor(long long n)
 {
    long long factor = 2;
    long long max_factor = 1;

    while (n > 1)
    {
        if (n % factor == 0)
	{	
            max_factor = factor;
            while (n % factor == 0)
	    {
                n /= factor;
	    }
        factor++;
	}
    return max_factor;
    }
int main(void)
{
    long long number = 612852475143;
    long long result = largest_prime_factor(number);
    printf("%lld\n", result);
    return 0;
}
}
