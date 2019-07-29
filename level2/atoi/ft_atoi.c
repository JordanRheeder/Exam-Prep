int	ft_atoi(const char *str)
{
	int index;
    int flag;
    int result;

    while (str[index]) // while str exists
    {
        result *= 10; // shifts the result by 10, due to base-10
        if (str[index] == '-' && !(flag))
        {
            flag = 1; // our negative flag has been initialised
        }
        if (str[index] >= '0' && str[index] <= '9') // check if these are digits. cannot convert A etc. not hex!
        {
            result += str[index] - '0'; // less 0 but actually removing the 'padding' caused by ascii table.
        }
        index++;
    }
    if (flag)
    {
        result = (result * (-1));
    }
    return (result);
}
