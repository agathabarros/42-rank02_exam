/*Write a function that returns the number of elements in the linked list that's
passed to it.
*/
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int size = 0;

    while(begin_list)
    {
        begin_list = begin_list->next;
        size++;
    }
    return(size);
}