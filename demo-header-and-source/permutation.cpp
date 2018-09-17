
//int factorial(int);
#include "utils.h"

int permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
}
