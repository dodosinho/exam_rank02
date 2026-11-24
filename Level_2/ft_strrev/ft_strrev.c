char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	copy;

	i = 0;
	j = 0;

	while (str[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		copy = str[i];
		str[i] = str[j];
		str[j] = copy;

		i--;
		j++;
	}
	return (str);
}