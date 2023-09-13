/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:43:11 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/07 14:53:01 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char**av)
{
    int n1;
    int n2;

    if(ac == 3)
    {
        if((n1 = atoi(av[1])) > 0 && (n2 = atoi(av[2])) > 0)
        {
            while (n1 != n2)
            {
                if(n1 > n2)
                    n1 = n1 - n2;
                else
                    n2 = n2 - n1;
            }
            printf("%d", n1); 
        }
    }
    printf("\n");
}