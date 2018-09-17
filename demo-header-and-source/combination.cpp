
#include "utils.h"

int combination(int n,int r)
{
    return permutation(n,r)/factorial(r);
}
