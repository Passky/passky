#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[1000];
    int x1 = 0, x2 = 0;
    int y1 = 0, y2 = 0;
    int count = 0;
    int _count = 0;
    char resule[1000][6];
    char _resule[1000][6];
    FILE *fp = fopen("ceshi.txt", "w+");
    while (scanf("%s", a) != EOF)
    {
        int n = strlen(a);

        for (int i = 0; i < n; i++)
        {

            if (a[i] == 'W')
            {
                y1++;
                x1++;
            }
            else if (a[i] == 'L')
            {
                y2++;
                x2++;
            }
            if (((x1 >= 11 || x2 >= 11) && (abs(x1 - x2) >= 2)) || a[i] == 'E')
            {
                char c[6];
                sprintf(c, "%d:%d", x1, x2);
                strcpy(resule[count], c);
                count++;
                x1 = 0;
                x2 = 0;
            }
            if (((y1 >= 21 || y2 > 21) && (abs(y1 - y2) >= 2)) || a[i] == 'E')
            {
                char c[6];
                sprintf(c, "%d:%d", y1, y2);
                strcpy(_resule[_count], c);
                _count++;
                y1 = 0;
                y2 = 0;
            }
            if (a[i] == 'E')
                goto loop1;
        }
    }
loop1:
    for (int i = 0; i < count; i++)
        puts(resule[i]); //fprintf(fp, "%s\n", resule[i]); //
    printf("\n");
    for (int i = 0; i < _count; i++)
        puts(_resule[i]);
    return 0;
}