#ifndef Wu
#define Wu
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct listing list;
struct listing
{
    int count;
    list *next;
};
struct son
{
    list rson;
};
void initialize(list *arrow, int n)
{
    list *start = arrow;
    for (int i = 0; i < n; i++)
    {
        arrow->next = (list *)malloc(sizeof(list));
        arrow->next->count = 1;
        arrow = arrow->next;
    }
    arrow->next = start;
}
void delete (list *arrow)
{
    list *sync;
    for (sync = arrow; sync->next->count != 0; sync = sync->next)
    {
    }
    list *shit = sync->next;
    sync->next = sync->next->next;
    free(shit);
}
void
#endif