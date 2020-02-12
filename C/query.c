#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    struct son a;
    list start;
    start.count = 0;
    list *sync = &start, *membet = &start;
    for (int i = 1; i < 4; i++)
    {
        membet->next = (list *)malloc(sizeof(list));
        membet->next->count = i;
        membet = membet->next;
    }
    membet->next = sync;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", membet->count);
        membet = membet->next;
    }
}