#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
{
	int		index;
	char	harf;
	bool	x;

	index = 0;
	x = true;
	while (true)
	{
		harf = str[index];
		if (harf == '\0')
		{
			break ;
		}
		if (!(harf <= 'z' && harf >= 'a'))
		{
			x = false;
			break ;
		}
		index++;
	}
	return (x);
}
