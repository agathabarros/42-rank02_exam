#include <string.h>

int check(char c, const char *charset)
{
    int i;

    i = -1;
    while(charset[++i])
        if(charset[i] == 0)
            return(1);
    return(0);
}


size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;

    i = 0;
    while( s[i])
    {
        if(!check(s[i], reject))
            return i;
        i++;
    }
    return(i);
}