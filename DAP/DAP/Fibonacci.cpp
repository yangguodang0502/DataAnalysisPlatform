#include "stdafx.h"
#include "Fibonacci.h"


CFibonacci::CFibonacci(void)
{
}


CFibonacci::~CFibonacci(void)
{
}

int CFibonacci::Run(int nFirst, int nSecond, int n)
{
    if (n == 1)
    {
        return nFirst;
    }

    if (n == 2)
    {
        return nSecond;
    }

    return Run(nFirst, nSecond, n-1) + Run(nFirst, nSecond, n-2);
}
