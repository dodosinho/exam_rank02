#include <unistd.h>

void	print_number(int number)
{
	int		div;
	int		mod;
	char	c;

	if (number < 10)
	{
		c = number + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		return ;
	}
	div = number / 10;
	mod = number % 10;
	c = div + '0';
	write(1, &c, 1);
	c = mod + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	fizzbuzz(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (number % 3 == 0)
			write(1, "fizz\n", 5);
		else if (number % 5 == 0)
			write(1, "buzz\n", 5);
		else
			print_number(number);
		number++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}