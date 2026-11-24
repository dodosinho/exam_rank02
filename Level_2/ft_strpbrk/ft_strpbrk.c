#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				str = (char *)&s1[i];
				return (str);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}