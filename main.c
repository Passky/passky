#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    data shit1;
    struct node pieceofshit;
    struct node *shit;
    link shit = pieceofshit.next;
    link fuck = &pieceofshit;
    start(&shit);
    puts("enter you movie with rate");
    while (scanf("%c %d", &shit1.name, &shit1.no) != EOF)
    {
        if (shit1.no > 10)
            break;
        additem(shit1, &shit);
    }
    link fuck2 = &pieceofshit;
    //delete (&fuck2);

    for (link alwaysshit = fuck->next; alwaysshit->next != NULL; alwaysshit = alwaysshit->next)
        printf("%d", alwaysshit->sample.no);
    return 0;
    /* link g1 = converse(&shit); */
    /* if(g1!=NULL) */
    /* for (; g1->next != NULL; g1 = g1->next) */
    /* { */
    /*     printf("%c %d\n", g1->sample.name, g1->sample.no); */
    /* } */
}
