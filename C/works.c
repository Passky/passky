#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *a;
    int x1 = 0, x2 = 0;
    int y1 = 0, y2 = 0;
    int count = 0;
    int _count = 0;
    char resule[100][6];
    char _resule[100][6];
    while (scanf("%s", a) != EOF)
    {
        int n = strlen(a);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'E')
                break;
            if (a[i] == 'W')
            {
                y1++;
                x1++;
            }
            else
            {
                y2++;
                x2++;
            }
            if ((x1 >= 11 || x2 >= 11) && (abs(x1 - x2) > 2))
            {
                strcpy(resule[count] , ("%d:%d", x1, x2));
                count++;
            }
            if ((y1 >= 21 || y2 > 21) && (abs(y1 - y2) > 2))
            {
                strcpy(_resule[_count], ("%d:%d", y1, y2));
                _count++;
            }
        }
    }
    for (int i = 0; i < count; i++)
        puts(resule[i]);
    for (int i = 0; i < _count; i++)
        puts(_resule[i]);
    return 0;
}