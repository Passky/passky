#include "MYCMP.h"
#include<stdlib.h>

#include"list copy.h"
MATHCMP(int,-1,1)
int main()
{
    int x[5]={1,2,3,4,5};
    qsort(x, sizeof(int), 5, _mathcmp1);
    for (int i = 0; i < 5;i++)
        printf("%d\n", x[i]);
    
}