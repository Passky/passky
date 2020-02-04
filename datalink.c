#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node* link;
struct node
{
    int item;
    link next;
};
int main()
{
int i;
link cycle1,cycle2,cycle3,cycle4;
struct node sr,st;
cycle1=&sr;cycle2=&st;
cycle1=(link)malloc(sizeof(link));
cycle2=(link)malloc(sizeof(link));
for(int i=1;i<6;i++)
{
    cycle1->next=(link)malloc(sizeof(link));
    cycle1->item=i;
    cycle1=cycle1->next;
}
cycle1->next=NULL;
i=0;
cycle3=&st;
cycle4=&st;
for(int j=1;j<6;j++)
{
cycle4->next=(link)malloc(sizeof(link));
    cycle4->item=0;
cycle4=cycle4->next;
}
cycle4->next=NULL;
cycle4=&st;
link fuck;
link shit;
for(int j=1;j<5;j++)
{
for(cycle3=&sr;cycle3->next->next!=NULL;cycle3=cycle3->next)
{
 if(cycle3->next->item>cycle4->item)   
 {
     fuck=cycle4;
     shit=cycle3->next;
     cycle4=cycle3->next;
     cycle4->next=fuck->next;
 cycle3->next=shit->next;    
 }
}
printf("%d\n",cycle4->next->item);
}
}
