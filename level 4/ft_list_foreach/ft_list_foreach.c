#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *tmp;

    tmp = begin_list;
    while(tmp)
    {
        (*f)(tmp->data);
        tmp = tmp->next;
    }
}
int main(void)
{
    t_list *list;
    char *str1 = "Hello";
    char *str2 = "World";
    char *str3 = "!";
    list = ft_create_elem(str1);
    ft_list_push_front(&list, str2);
    ft_list_push_front(&list, str3);
    ft_list_foreach(list, &ft_putstr);
    return (0);
}