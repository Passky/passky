#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    struct node start;
    link list = &start;
    lstart(&list);
    struct data2 current;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &current.no);
        additem(current, &list);
    }
    for (link laucher = &start; laucher->next != NULL; laucher = laucher->next)
        printf("%d", laucher->sample.no);
    /* link g1 = converse(&shit); */
    /* if(g1!=NULL) */
    /* for (; g1->next != NULL; g1 = g1->next) */
    /* { */
    /*     printf("%c %d\n", g1->sample.name, g1->sample.no); */
    /* } */
}
