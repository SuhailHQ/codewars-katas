#include <stddef.h>

size_t  str_count(const char *str, char letter) 
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == letter)
        {
            count++;
        }
        i++;
    }
    return count;
}
