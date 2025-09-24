double find_average(const double array[/* length */], unsigned length)
{
	unsigned int i;
    double sum;

    i = 0;
    sum = 0;
    if(!array){
        return 0;
    }
    while (i < length)
    {
        sum = sum + array[i];
        i++;
    }
    return sum / length;
}

