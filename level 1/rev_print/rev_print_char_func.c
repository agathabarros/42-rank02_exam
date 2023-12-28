#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return(i);
}

char *rev_print(char *str)
{
    
    if (str == NULL) {
        // Tratamento para string nula
        return NULL;
    }

    int len = ft_strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while(start < end)
    {
        // Troca os caracteres usando uma variável temporária
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
       end--;
    }
    return str;
}
int main()
{
    char str[] = "Life is good.";
    char *result = rev_print(str);
    printf("The length of the string is %s.\n", result);
    return 0;
}