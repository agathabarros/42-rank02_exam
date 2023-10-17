/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:52:11 by agathabarro       #+#    #+#             */
/*   Updated: 2023/10/10 14:56:36 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char *s)
{
    while(*s)
    {
        write(1, &*s, 1);
        s++;
    }
}
int blank(char c)
{
    if (c == ' ' || c == '\t')
        return(1);
    return(0);
}
int count_words(char *s)
{
    int ct = 0;

    while(*s)
    {
        if(!blank(*s))
        {
            ct++;
            while(*s && !blank(*s))
                s++;
        }
        else 
            s++;
    }
    return(ct);
}
char *get_word(char *str)
{
    int i = 0;
    while(str[i] && !blank(str[i]))
        i++;
    char *word = (char *)malloc(sizeof(char) * (i + 1));
    if(!word)
        return(NULL);
    i = 0;
    while(str[i] && !blank(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word = '\0';
    return(word);
}
char **ft_split(char *str)
{
    int j= 0;
    
    char **words =(char **)malloc(sizeof(char*) * (count_words(str) + 1));
    if(!words)
        return(NULL);
    while(*str)
    {
        if(!blank(*str))
        {
            words[j] = get_word(str);
            while(*str && !blank(*str))
                str++;
            j++;
        }
        else
            str++;
    }
    words[j] = '\0';
    return(words);
}
void rev_wstr(char *s)
{
   char **words =ft_split(s);
   int end = count_words(s);

   while(end >= 0)
   {
        ft_putchar(words[end]);
        if(end>= 0)
            ft_putchar(" ");
        free(words[end]);
        end --;
   }
   free(words);
}

int main(int ac, char **av)
{
    if(ac > 1)
        rev_wstr(av[1]);
    write(1, "\n", 1);
   
}