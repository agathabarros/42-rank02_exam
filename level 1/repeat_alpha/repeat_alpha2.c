#include <unistd.h>

int count(char c)
{
    if(c >= 'a' && c <= 'z') // if the character is a lowercase letter
        return(c - 'a' + 1); // return the number of times the letter should be repeated
    if(c >= 'a' && c <= 'z')
        return(c - 'a' + 1);
    else 
        return(1);
}
void repeat_alpha(char *s)
{
    int rep = 0;
    while(*s) // while the string is not empty
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'a' && *s <= 'z')) // if the character is a letter
        {
            rep =count(*s);// count the number of times the letter should be repeated
            while(rep --) // repeat the letter rep times 
                write(1, &*s, 1); // write the letter
        }
        else 
            write(1, &*s, 1); // if the character is not a letter, write it
        s++; // move to the next character
    }

}
int main(int ac, char **av)
{
    repeat_alpha(av[1]);
}