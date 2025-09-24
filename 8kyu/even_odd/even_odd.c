#include <unistd.h>
#include <stdio.h>
void odd();
void even();
int i = 1;
void ft_putnbr(int n){
    if(n >= 10){
        ft_putnbr(n / 10);
    }
    char c = '0' + n % 10;
    write(1, &c, 1);
}

void odd()
{
    if (i <= 10)
    {
        ft_putnbr(i + 1);
        write(1, " ", 1);
        i++;
        even();
    }
    return;
}
void even(){
    if (i <= 10)
    {
        ft_putnbr(i - 1);
        write(1, " ", 1);
        i++;
        odd();
    }
    return;
    
}
int main(){
    odd();
}