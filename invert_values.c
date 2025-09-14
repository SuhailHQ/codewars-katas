#include <stddef.h>

void    invert(int array[], size_t length)
{
    int i;

    i = 0;
    if (!array)
    {
        return;
    }
    
    while (i < length)
    {
        if (array[i] > 0)
        {
            array[i] = array[i] * -1;
        }
        else if (array[i] < 0)
        {
            array[i] = array[i] * -1;
        }
        i++;
    }
}
