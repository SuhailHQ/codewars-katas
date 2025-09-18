#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[], size_t count)
{
    int i;
    int sheepNumbers;

    i = 0;
    sheepNumbers = 0;
    while (i < count)
    {
        if (sheep[i] == true)
        {
            sheepNumbers++;
        }
        i++;
    }
    return sheepNumbers;
}
