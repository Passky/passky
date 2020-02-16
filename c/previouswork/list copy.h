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
        x = x - y;}
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
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
int additem(data da, link *list); //done
int empty(link *list);            //meanless
int counting(link *list);         //done
int full(link *list);             //nope
link converse(link *list);        //done
//link delete (link list);
#endif
