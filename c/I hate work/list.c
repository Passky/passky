#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"
void lstart(link *list)
{
    *list = NULL;
}
int additem(data da, link *list)
{
    link start = *list;
    link down = start;
    link sank;
    sank = (link)malloc(sizeof(link));
    sank->next = NULL;
    sank->sample = da;
    if (start == NULL)
    {
        (*list) = sank;
    }
    else
    {
        while (down->next != NULL)
            down = down->next;
        down->next = sank;
    }
    return 1;
}
int counting(link *list)
{
    link shit = *list;
    int count = 1;
    if (shit == NULL)
        return 0;
    for (; shit->next != NULL; shit = shit->next)
        count++;
    return count;
}
int empty(link *list)
{
    if (*list == NULL)
        return 1;
    else
        return 0;
}
/*link delete (link list)
{
    link start = (list);
    link re = (list);
    if (start == NULL)
    {
        puts("empty");
        return NULL;
    }
    else if (start->next = NULL)
        start = NULL;
    else
    {
        while (start->next != NULL)
            start = start->next;
        start = NULL;
    }
    return re;
}

link converse(link *list)
{
    if ((list) = NULL)
        return NULL;
    link cycle1, cycle2, nos1, nos2;
    cycle1 = (link)malloc(sizeof(link));
    cycle2 = (link)malloc(sizeof(link));
    link next1;
    cycle1->next = list;
    cycle2->next = list;
    for (cycle1 = cycle2; cycle1->next->next != NULL; cycle1 = cycle1->next)
    {
        nos1 = list;
        for (nos2 = cycle2; nos2->next->next != NULL; nos2 = nos2->next)
            if (nos2->next->sample.no > nos1->next->sample.no)
            {
                nos1 = cycle1->next;
            }
        link m = nos1;
        next1->next = nos1;
    }
}
*/