#include <unistd.h>

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while ((str[i] >= 33 && str[i] <= 126) && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		str = argv[1];
		first_word(str);
		return (0);
	}
}
