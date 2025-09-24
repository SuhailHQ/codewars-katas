#include <stdio.h>
unsigned char move(unsigned char pos, unsigned char roll)
{
    return roll * 2 + pos;
}

int main(){
    printf("%d", move(245, 5));
}