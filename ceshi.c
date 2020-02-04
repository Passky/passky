#include "MYCMP.h"
#include "list.h"
#include<stdlib.h>
#include"list copy.h"
int main()
{
    struct node a;
    a.sample.no = 1;
    link shit;
    shit = &a;
    shit->next=(link)malloc(sizeof(link));
    shit->next->sample.no = 2;
    shit->next->next=NULL;
    struct data2 b;
    b.no = 999;
    additem(b, &shit);
    delete (&shit);
    for (link fuck = shit; fuck != NULL; fuck = fuck->next)
        printf("%d\n", fuck->sample.no);
    return 0;
}