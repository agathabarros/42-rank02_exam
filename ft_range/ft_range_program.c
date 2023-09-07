/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:01:06 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/06 19:24:45 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = abs((end - start)) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

    while (i < len)
    {
        if (start < end)
        {
            res[i] = start;
            start++;
            i++;
        }
        else
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return(res);
}
int main(int ac, char**v)
{
    int i = 0;
    int *res;
    int start = atoi(v[1]);
    int end = atoi(v[2]);
    int len = abs((end - start)) + 1;

    res = ft_range(start, end);
    while (i < len)
    {
        printf("%d\n", res[i]);
        i++;
    }
    return(0);
}