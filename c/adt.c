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
	for (link *re = start; re != NUll;re->next)
{
	for()
}

		for (link *re = &start; re->next != 0; re = re->next)
			printf("%d\n", re->next->sample);
}