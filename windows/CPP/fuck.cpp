#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
void start(link *list)
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
link converse(link *list)
{
  if (*list == NULL)
    return NULL;
  link nextring = (link)malloc(sizeof(link));
  nextring->next = (link)malloc(sizeof(link));
  nextring->next->next = (link)malloc(sizeof(link));
  link g1, g2, g3 ;
  g3->next = (*list);
  link start = g3;
  link sh = nextring;
  g1=
  for (; g3->next != NULL; g3 = g3->next)
  {
    for (start = g3; start->next != NULL; start = start->next)
    {
      if (start->next->sample.no > g1->next->sample.no)
        g1 = start->next;
    }
    if(g1->next=NULL)
      nextring->next=g1;
      else 
      {
        link pa1 = ;
        
      }
  }
  nextring->next = NULL;
  return sh->next;
}
int main()
{
  data shit1;
  link shit;
  start(&shit);
  puts("enter you movie with rate");
  while (scanf("%c %d", &shit1.name, &shit1.no) != EOF)
  {
    if (shit1.no > 10)
      break;
    additem(shit1, &shit);
  }
  int i;
  link g1 = converse(&shit);
  for (; g1->next != NULL; g1 = g1->next)
  {
    printf("%c %d\n", g1->sample.name, g1->sample.no);
  }
}
