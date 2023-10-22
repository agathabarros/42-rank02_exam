/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:00:26 by agathabarro       #+#    #+#             */
/*   Updated: 2023/10/22 08:50:37 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*strdup is a function that returns a pointer to a new string which is a duplicate of the string s. 
Memory for the new string is obtained with malloc, and can be freed with free.*/
char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *strcpy;

    while(src[len])
        len++;
    strcpy = malloc(sizeof(*strcpy) * (len + 1));
    if (strcpy != NULL)
    {
        while (src[i])
        {
            strcpy[i] = src[i];
            i++;
        }
        strcpy[i] = '\0';
    }
    return(strcpy);
}