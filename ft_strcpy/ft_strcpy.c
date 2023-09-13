/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <agpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:54:31 by agpereir          #+#    #+#             */
/*   Updated: 2023/09/11 12:05:10 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(*s2)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return(s2);
}