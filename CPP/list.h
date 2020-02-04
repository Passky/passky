#ifndef wu
#define wu
#define TSIZE 45
struct data2
{
    int no;
    char name;
};
typedef struct data2 data;
struct node
{
    data sample;
    struct node *next;
};
typedef struct node *link;
void lstart(link *list);          //done
int additem(data da, link *list); //done
int empty(link *list);            //meanless
int counting(link *list);         //done
int full(link *list);             //nope
link converse(link *list);        //done
//link delete (link list);
#endif
