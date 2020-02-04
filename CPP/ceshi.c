#include "MYCMP.h"
#include "list.h"
#include<stdlib.h>
#include"list copy.h"
int main()
{
    struct node a,o;
    a.sample.no = 1;
    link shit;
    shit = &a;
    link ccc = shit;
    shit->next=(link)malloc(sizeof(link));
    shit->next->sample.no = 2;
    shit->next->next=NULL;
    struct data2 b;
    b.no = 999;
    additem(b, &shit);
    delete (&shit);
    link qqq = ccc->next;
    ccc->next = ccc->next->next;
    free(qqq);
    o = *qqq;
    //for (link fuck = shit; fuck != NULL; fuck = fuck->next)
    //  printf("%d\n", fuck->sample.no);
    printf("%d\n", counting(&shit));
    return 0;
}