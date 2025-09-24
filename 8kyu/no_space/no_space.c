#include <stdlib.h>
#include <stdio.h>
// return a heap-allocated string

char    *no_space(const char *str_in) 
{
    int i;
    int len;
    int j;

    i = 0;
    len = 0;
    j = 0;
    while (str_in[len] != '\0')
    {
        len++;
    }
    

    char *string = (char *)malloc((len + 1 ) * sizeof(char));

    if (!string)
        return NULL;
    while (str_in[i] != '\0')
    {
        if (str_in[i] != ' ')
        {
            string[j] = str_in[i];
            j++;
        }
        
        i++;
    }
    string[j] = '\0';
      return (string);  
}
int main()
{
    char aa[] = "8 j 8   mBliB8g  imjB8B8  jl  B";
    char *res = no_space(aa);
    printf("%s", res);

}