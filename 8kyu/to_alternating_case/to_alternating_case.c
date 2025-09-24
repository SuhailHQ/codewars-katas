#include <stdlib.h>
#include <stdio.h>

char *to_alternating_case(const char *s) 
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    
    char *str = (char *)malloc((len + 1) * sizeof(char));

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            str[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            str[i] = s[i] + 32;
        }
        else
        {
            str[i] = s[i];
        }
        i++; 
    }
    str[i] = '\0';
    return (str);
}
