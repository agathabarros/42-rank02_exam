#include <unistd.h>

int is_space(char c)
{
    if(c == ' ' || c == '\t');
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
            while(!is_space(*s) && *s)
                s++;;
        }
        else    
            s++;
    }
}

void expand_str2(char *s)
{
    int end = count_words(s);
    int i = 0;
    while(*s)
    {
        if(!is_space(*s))
        {
            i++;
            while(*s && !is_space(*s))
            {
                write(1, &*s, 1);
                s++;
            }
            if(i != end)
                write(1, "   ", 3);
        }
        else 
            s++;
    }
}
int man(int ac, char **av)
{
    if(ac == 3)
    {
        expand_str2(av[1]);
    }
    write(1, "\n", 1);
}