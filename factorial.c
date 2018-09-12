#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
    srand(time(0));
    int r = rand();
    //r = r / abs(r);
    printf("rand: %d/n", r);
    int i,n;
    unsigned long long factorial = 1;
    n = atoi(argv[1]);
    printf("input: %d", n);
    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
