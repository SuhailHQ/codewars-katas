#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool feast(const char* beast, const char* dish) {

    const char *b;
    const char *d;

    b = beast;
    d = dish;
    while (*b != '\0')
    {
        b++;
    }
    while (*d != '\0')
    {
        d++;
    }
    b--;
    d--;
    if (*beast == *dish && *b == *d)
    {
        return true;
    }
    else
    {
        return false;
    }
}
