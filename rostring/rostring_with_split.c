#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putstr(char *s)
{
    while(*s)
    {
        write(1, &*s, 1);
        s++;
    }
}
int is_space(char c)
{
    if(c == ' ' || c == '\t')
        return(1);
    return(0);
}
int count_words(char *s)
{
    int ct = 0;
    while(*s)
    {
        if(!is_space(*s))
        {
            ct++;
            while(*s && !is_space(*s))
                s++;
        }
        else
            s++;
    }
    return(ct);
}
char *get_words(char *s)
{
    int i = 0;
    while(s[i] && !is_space(s[i]))
        i++;
    char *word = (char *)malloc(sizeof(char) * (i + 1));
    if (!word)
        return(NULL);
    i = 0;
    while(s[i] && !is_space(s[i]))
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return(word);
}
char **ft_split(char *s)
{
    int i = 0;
/*     printf("%d", count_words(s));
    exit(0); */
    char **words = (char **)malloc(sizeof(char*) * (count_words(s) + 1));
    if (!words)
        return(NULL);

    while(*s)
    {
        if(!is_space(*s))
        {
            words[i] = get_words(s);
           /*  printf("%s", words[0]);
            exit(0); */
            while(*s && !is_space(*s))
                s++;
            i++;
        }
        else
            s++;
    }
    words[i] = 0;
    return(words);
}
void    rostring(char *s)
{
    char **words = ft_split(s);
    char *last = words[0];
    int end = count_words(s);
    int i = 1;
    while(i < end)
    {
        ft_putstr(words[i]);
        ft_putstr(" ");
        free(words[i]);
        i++;
    }
    ft_putstr(last);
    free(last);
    free(words);
}
int main(int ac, char **av)
{
    if(ac > 1)
    {
        //rostring(av[1]);
        av = ft_split(av[1]);
        printf("%s", av[0]);
        printf("%s", av[1]);

    }
    write(1, "\n", 1);
}