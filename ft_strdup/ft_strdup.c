/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:00:26 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/01 07:07:17 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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