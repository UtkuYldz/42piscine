#include <stdbool.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		index;
	char	harf;

	index = 0;
	while (true)
	{
		harf = str[index];
		if (harf == '\0')
		{
			break ;
		}
		if (harf <= 'Z' && harf >= 'A')
		{
			str[index] = harf + 32;
		}
		index++;
	}
	return (str);
}
