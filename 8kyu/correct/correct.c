#include <stdio.h>
char *correct(char *string) 
{
    char *str;

    str  = string;
    while (*str != '\0')
    {
        if (*str == '5')
        {
            *str = 'S';
        }
        else if (*str == '0')
        {
            *str = 'O';
        }
        else if (*str == '1')
        {
            *str = 'I';
        }
        
        str++; 
    }
    return string;
    
}
int main()
{
    char string[] = {"1F-RUDYARD K1PL1NG IF-RUDYARD KIPLING"};
    printf("%s\n", correct(string));
}