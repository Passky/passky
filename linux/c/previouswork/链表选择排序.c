#include "list.h"
int main()
{
	link start;
	link *origin = &start;
	for (int i = 0; i < 5; i++)
	{
		origin->next = (link *)malloc(sizeof(link));
		origin->next->sample = i + 1;
		origin = origin->next;
	}
	origin->next=NULL;
	origin=&start;
	link *re;
	for(link* set=origin;set->next!=NULL;set=set->next)
	{link* linker=set;int flag=0;
		for(link* setcycle=set->next;setcycle->next!=NULL;setcycle=setcycle->next)
		if(setcycle->next->sample>linker->next->sample)
		{linker=setcycle;flag=1;}
		if(!flag) break;  //出于不明原因 不跳出会归0....
		swap(set->next->sample,linker->next->sample)
	}
	for(link* set=origin->next;set!=NULL;set=set->next)
	printf("%d\n",set->sample);
}