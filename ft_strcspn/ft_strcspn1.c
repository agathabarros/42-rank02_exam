#include <string.h>

/* The strcspn() function calculates the length of the initial 
segment of s which consists entirely of characters not in reject.*/
size_t	ft_strcspn(const char *s, const char *reject) 
{
    size_t i = 0;
    size_t j = 0;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}