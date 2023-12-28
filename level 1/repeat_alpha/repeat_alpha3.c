#include <unistd.h>

int count(char c)
{
    if(c >= 'a' && c <= 'z') // if the character is a lowercase letter
        return(c - 'a' + 1); // return the number of times the letter should be repeated
    if(c >= 'A' && c <= 'Z')
        return(c - 'A' + 1);
    else 
        return(1);
}
void repeat_alpha(char *s)
{
    int rep = 0;
    int i =0;
    while(s[i]) // while the string is not empty
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) // if the character is a letter
        {
            rep =count(s[i]);// count the number of times the letter should be repeated
            while(rep --) // repeat the letter rep times 
                write(1, &s[i], 1);
        }
        else 
            write(1, &s[i], 1); // if the character is not a letter, write it
        i++; // move to the next character
    }

}
int main(int ac, char **av)
{
    repeat_alpha(av[1]);
}