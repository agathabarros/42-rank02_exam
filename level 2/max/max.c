int		max(int* tab, unsigned int len)
{
    int i;
    int max;

    if(!len)
        return(0);
    i = 0;
    max = tab[0]; // set the max to the first element of the array
    while(i<len) // while the index is less than the length of the array
    {
        if(tab[i] > max) // if the element is greater than the max
            max = tab[i]; // set the max to the element
        i++;
    }
    return(max);    
}