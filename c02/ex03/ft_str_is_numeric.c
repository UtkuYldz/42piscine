#include <stdbool.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	char	sayi;
	int		index;
	bool	x;

	index = 0;
	x = true;
	while (true)
	{
		sayi = str[index];
		if (sayi == '\0')
		{
			break ;
		}
		if (!(sayi <= '9' && sayi >= '0'))
		{
			x = false;
			break ;
		}
		index++;
	}
	return (x);
}
