#ifndef wu
#define wu
#define TSIZE 45
#define bool int
#define true 1
#define flase 0
#define swap(x, y) \
    {              \
        x = x + y; \
        y = x - y; \
        x = x - y; \
    }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data2
{
    int no;
    char name;
};
typedef struct data2 data;
struct node
{
    int sample;
    struct node *next;
};
typedef struct node link;
void lstart(link *list);          //done
int additem(link *list, int v) //done
{
   link* x=(link*)malloc(sizeof(link));
   x->sample=v;
   x->next=NULL;
   list->next=x;
   return v;
}
int empty(link *list);            //meanless
int counting(link *list);         //done
int full(link *list);             //nope
link converse(link *list);        //done
link* deletenode (link *list, link *shit)
{
    link *start = list;
    link *follow = start;
    start = start->next;
    while (start != shit && start != NULL)
    {
        start = start->next;
        follow = follow->next;
    }
    if (start == NULL)
        printf("Error!\n");
    else if (start->next == NULL)

        follow->next = NULL;
    else
    {
        follow->next = start->next;
        free(start);
    }
}
//link delete (link list);
#endif
