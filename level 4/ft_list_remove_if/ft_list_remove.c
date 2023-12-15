#include "ft_list.h"

void ft_list_remove(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current = *begin_list;
    t_list *previous = 0;
    while (current)
    {
        if((cmp)(current->data, data_ref) == 0)
        {
            if(previous == 0)
                *begin_list =current->next;
            else 
                previous->next = current->next;
            free(current);
        }
        previous=current;
        current= current->next;
    }
}