#include <unistd.h>

void ft_putstr(char *s)
{
    int i =0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
void wdmatch(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s2[j])
        if(s2[j++] == s1[i]) // if s2[j] == s1[i] then increment i
            i++;    
    if(!s1[i]) // if s1 is finished
        ft_putstr(s1);
}
int main(int ac, char **av)
{
    if(ac == 3)
        wdmatch(av[1], av[2]);
    write(1, "\n", 1);
}