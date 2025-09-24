int getAge(const char *inputString)
{
    int i;
    int age;

    i = 0;
    age = 0;
    while (inputString[i] != '\0')
    {
        if (i == 0)
        {
            age = inputString[i] - '0';
        }
        i++;
    }
    return (age);
    //return *inputString - '0';
}
