int basic_op(char op, int value1, int value2) 
{
    int sum;
    
    sum = 0;
    if (op == '+')
    {
        sum = value1 + value2;
    }
    else if (op == '-')
    {
        sum = value1 - value2;
    }
    else if (op == '*')
    {
        sum = value1 * value2;
    }
    else if (op == '/')
    {
        sum = value1 / value2;
    }
    return sum;
}
