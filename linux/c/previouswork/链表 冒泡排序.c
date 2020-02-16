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
    int flag = 1;
    link *temp;
    origin = &start;
    link *bubble; //冒泡前一轮不用到底
    for (link *re = origin; re /*可选(->next)*/ != NULL; re = re->next)
    {
        //这一轮必须到底
        for (temp = re->next; temp != NULL; temp = temp->next)
        {
            if (temp->sample > re->next->sample)
                swap(temp->sample, re->next->sample)
            //if (temp->next = NULL) break;
        }
    }
    for (link *re = &start; re->next != 0; re = re->next)
        printf("%d\n", re->next->sample);
}