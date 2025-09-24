#include <stddef.h>
int grow(size_t size, const int arr[]) 
{
    int i;
    int sum;

    i = 0;
    sum = 1;
    while (i < size)
    {
        sum = sum * arr[i];
        i++;
    }
    return sum;
    
}
