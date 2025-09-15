#include <stddef.h>

int positive_sum(const int values[], size_t count)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < count)
    {
        if (values[i] > 0)
        {
            sum = sum + values[i];
        }
        i++;
    }
    return (sum);
}
