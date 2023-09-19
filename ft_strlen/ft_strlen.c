#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return(i);
}
/*int main()
{
 	char str[] = "Life is good.";
	int result = ft_strlen(str);
 	printf("The length of the string is %d.\n", result);
 	return 0;
}*/