#include <stdio.h>
#include <stdbool.h>

char	*ft_strupcase(char *str)
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
		if (harf <= 'z' && harf >= 'a')
		{
			str[index] = harf - 32;
		}
		index++;
	}
	return (str);
}
