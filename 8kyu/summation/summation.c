int summation(int number) 
{
    int i;
    int sum;

    i = 1;
    sum = 0;
    while (i <= number)
    {
        sum = sum + i;
        i++;
    }
    return sum;
}

