#include <unistd.h>

void	rot_13(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			c = str[i];
			j = 0;
			while (j < 13)
			{
				if (c == 'z')
					c = 'a';
				else if (c == 'Z')
					c = 'A';
				else
					c = c + 1;
				j++;
			}
			write (1, &c, 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		rot_13(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}