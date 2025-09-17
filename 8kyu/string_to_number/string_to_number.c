int     string_to_number(const char *src) {
  int i;
  int numbers;
  int sign;

  i = 0;
  numbers = 0;
  sign = 1;
  while (src[i] == '-' || src[i] == '+')
  {
    if (src[i] == '-')
    {
        sign = -sign;
    }
    
    i++;
  }
  while (src[i] != '\0')
  {
    numbers = numbers * 10 + (src[i] - '0');
    i++;
  }
  return numbers * sign;
}
