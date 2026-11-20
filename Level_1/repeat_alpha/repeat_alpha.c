#include <unistd.h>

void	ft_putchar(char c, int j)
{
	int	i;

	i = 0;
	while (i < (j + 1))
	{
		write(1, &c, 1);
		i++;
	}
}

void	repeat_alpha(char *str)
{
	int	i;
	int	j;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			j = str[i] - 65;
			ft_putchar(str[i], j);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			j = str[i] - 97;
			ft_putchar(str[i], j);
		}
		else
		{
			j = 0;
			ft_putchar(str[i], j);
		}
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		str = argv[1];
		repeat_alpha(str);
	}
	return (0);
}