#include <stddef.h>

void    monkey_count(size_t n, size_t array[n]) 
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i <= n)
    {
        array[j] = i;
        i++;
        j++;
    }
    
}
