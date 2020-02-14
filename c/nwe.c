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
    origin->next = NULL;
    int i = 0;
    for (link *re = start.next; re != NULL; re->next)
    {
        i++;
        if (i == 2)
        {
            re = NULL;
            break;
        }
    }

    for (link *re = &start; re->next != 0; re = re->next)
        printf("%d\n", re->next->sample);
}