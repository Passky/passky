#include <stdio.h>
#include <stdlib.h>
#include "MYCMP.h"
MATHCMP(long int, 1, 1)
int main()
{
    long int x;
    static long int youfuck;
    static long int y[100000];
    
    scanf("%ld", &x);
    for (int i = 0; i < x; i++)
        scanf("%ld", &y[i]);
    qsort(y, x, sizeof(long int), _cmp1);
    for (int i = 0; i < x; i++)
        printf("%d ", y[i]);
    return 0;
}