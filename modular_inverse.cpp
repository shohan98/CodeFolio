// Iterative C++ program to find modular inverse using
// extended Euclid algorithm
#include <stdio.h>

// Returns modulo inverse of a with respect to m using
// extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e., gcd(a, m) = 1
int modInverse(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        q = a / m;

        t = m;

        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;

        t = x0;

        x0 = x1 - q * x0;

        x1 = t;
        printf("%d %d %d %d %d\n",x0,x1,t,a,m);
    }

    // Make x1 positive
    if (x1 < 0)
       x1 += m0;

    return x1;
}

// Driver program to test above function
int main()
{
    int a = 3, m = 11;
    while(scanf("%d %d",&a,&m)==2)
        printf("Modular multiplicative inverse is %d\n",modInverse(a, m));
    return 0;
}
