#include <unistd.h>

void	rotone(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if (str[i] == 'z')
				write(1, "a", 1);
			else if (str[i] == 'Z')
				write(1, "A", 1);
			else
			{
				c = str[i] + 1;
				write(1, &c, 1);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		rotone(argv[1]);
	return (0);
}