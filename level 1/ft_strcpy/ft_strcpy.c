#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World";
    ft_strcpy(s1, s2);
    printf("%s\n", s1);

    char s3[] = "Hello";
    char s4[] = "World";
    strcpy(s3, s4);
    printf("%s\n", s3);

    return (0);}