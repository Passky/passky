#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
struct film
{
    int rate;
    char name[45];
    struct film *next;
};
int main()
{
    int i, j,n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (i = 2;i<n;i++) a[i]=i;
    for (i = 2; i < n;i++)
    if(a[i])
        for ( j = i; (i * j) < n;j++)
            a[i * j] = 0;
    for (int i = 2; i < n;i++)
    if(a[i])
        printf("%4d\n", i);
    return 0;
}
