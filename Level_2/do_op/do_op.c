#include <unistd.h>
#include <stdio.h>

int    do_op(int a, char c, int b)
{
    int result;

    if (c == '+')
        result = a + b;
    else if (c == '-')
        result = a - b;
    else if (c == '*')
        result = a * b;
    else if (c == '/')
        result = a / b;
    else if (c == '%')
        result = a % b;
    return (result);
}

int atoi(char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\v')
        i++;
    if (str[i] == '-' || str [i] == '+')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (10 * result) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        printf("%d", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
        printf("\n");
        return (0);
    }
}
