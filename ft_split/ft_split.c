#include <stdio.h>
#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
int count_word(char *s)
{
    int count = 0;

    while(*s)
    {
        if(!is_space(*s))
        {
            count++;
            while(*s && !is_space(*s))
                s++;
        }
        else
            s++;
    }
    return(count);
}
char *get_word(char *s)
{
    int i  = 0;
    char *word;

    while(s[i] && !is_space(s[i]))
        i++;
    word = (char *)malloc(sizeof(char) * (i + 1));
    if (!word)
		return (NULL);
    i = 0;
    while(s[i] && !is_space(s[i]))
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return(word);
}

char    **ft_split(char *str)
{
    char **words;
    int i = 0;

    words = (char**)malloc(sizeof(char) * (count_word(str) + 1));
    if (!words)
		return (NULL);
    while(*str)
    {
        if(!is_space(*str))
        {
            words[i] = get_word(str);
            while(*str && !is_space(*str))
                str++;
            i++; 
        }
        else
            str++;
    }
    words[i] = 0;
    return(words);
}
int	main(void)
{
	char	s[] = "words and letters";
	char **words = ft_split(s);
	int count = count_word(s);

	for(int i = 0; i < count; i++)
	{
		printf("%s\n", words[i]);
		free(words[i]);
	}
	free(words);
}