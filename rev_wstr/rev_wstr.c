/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:52:11 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/12 17:27:59 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int blank(char c)
{
    if (c == ' ' || c == '\t')
        return(1);
    return(0);
}
void rev_wstr(char *s)
{
    int wc = 0; // coutn words
    int i = 0; // inder string
    int len; // lenght of words
    int a; // index for a char within a word
    
    while(s[i]) // count words
    {
        if(!blank(s[i++]) && (!wc || blank(s[i - 2])))
            ++wc;
    }
    while(s[--i]) // print words
    {
        if(!blank(s[i]) && wc--) // if not blank and word count
        {
            a = 0;
            len = 1;
            while(s[i + 1] && !blank(s[i + 1]) && ++len) // count lenght of word
                --i;
            while (len-- && write(1, &s[i + a++], 1)); // print word
            (wc) ? write(1, " ", 1) : 0; // print space if not last word
        }
    }
}

int main(int ac, char **av)
{
    if(ac == 2 && *av[1])
        rev_wstr(av[1], 1);
    write(1, "\n", 1);
    return(0);
}