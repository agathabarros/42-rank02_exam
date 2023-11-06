/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:09:28 by agathabarro       #+#    #+#             */
/*   Updated: 2023/10/15 12:40:32 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp = 0;
    t_list *curr =lst;
    while( lst ->next)
    {
        if(cmp(lst->data,lst->next->data) == 0) // if the first element is greater than the second element
        {
            temp =lst->data; // swap the elements
            lst->data =lst->next->data; // swap the elements
            lst->next->data = temp; // swap the elements
            lst = curr; // reset the list
        }
        else
            lst = lst->next; // if the first element is less than the second element, move to the next element
    }
    lst = curr; // reset the list
    return(lst);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ascending(int a, int b)
{
    return (a <= b);
}
int	main(void)
{
	t_list *l1 = (t_list *)malloc(sizeof(t_list));
	t_list *l2 = (t_list *)malloc(sizeof(t_list));
	t_list *l3 = (t_list *)malloc(sizeof(t_list));
	t_list *curr;

	int a = -63;
	int b = 0;
	int c = -87;

	l1->data = a;
	l2->data = b;
	l3->data = c;

	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;


	curr = sort_list(l1, &ascending);
	while (curr)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	free(l1);
	free(l2);
	free(l3);
} */
