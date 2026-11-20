#include <unistd.h>

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		str = argv[1];
		rev_print(str);
		write(1, "\n", 1);
	}
	return (0);
}