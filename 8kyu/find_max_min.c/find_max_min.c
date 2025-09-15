int min(int* array, int arrayLength)
{
    int minValue;
    int i;

    minValue = array[0];
    i = 0;
    while (i < arrayLength)
    {
        if (array[i] < minValue)
        {
            minValue = array[i];
        }
        i++;
    }
    
  return minValue;
}
int max(int* array, int arrayLength)
{
    int maxValue;
    int i;

    maxValue = array[0];
    i = 0;
    while (i < arrayLength)
    {
       if (array[i] > maxValue)
       {
        maxValue = array[i];
       }
        i++;
    }
    
  return maxValue;
}
