/* this function sorts an array of integers in ascending order.
* size - 1 is the last index of the array. 
* i is the index of the array.
* tmp is a temporary variable used to swap the values of the array.
*/
#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tmp;

    while(i < (size - 1))
    {
        if(tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab [i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

int main()
{
    int tab[5] = {5, 4, 3, 2, 1};
    printf("Before: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", tab[i]);
    
    printf("\nAfter: ");
    sort_int_tab(tab, 5);
    for(int i = 0; i < 5; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return(0);
}