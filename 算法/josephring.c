#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node link;
struct node
{
    int item;
    link *next;
};
int main()
{
    int n, m;
    link* current,*nextd;
    scanf("%d%d",&n,&m);
    current=(link*)malloc(sizeof(link*));
    nextd=current;
    current->item=1;
    current->next=current;
    for(int i=2;i<=n;i++)
    {
        nextd->next=(link*)malloc(sizeof(link*));
        nextd=nextd->next;
        nextd->item=i;
    }
        nextd->next=current;
    while(nextd!=nextd->next)
    {
        for(int i=1;i<m;i++)
        nextd=nextd->next;
        link *t=(link*)malloc(sizeof(link*));
        nextd->next=nextd->next->next;
        free(t);
        n--;
    }
    printf("%d\n",nextd->item-1);
}
