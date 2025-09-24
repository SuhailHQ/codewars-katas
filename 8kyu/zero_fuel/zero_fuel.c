#include <stdbool.h>
#include <stdio.h>
bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
    if (fuel_left * mpg >= distance_to_pump)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main(){
    printf("%d", zero_fuel(60, 30, 3));
}