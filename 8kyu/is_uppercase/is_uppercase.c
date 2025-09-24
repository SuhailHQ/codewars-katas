#include <stdbool.h>

bool is_uppercase(const char *source) 
{
    while (*source != '\0')
    {
        if (*source >= 'a' && *source <= 'z')
        {
            return false;
        }
        source++;
    }
    return true;
}
