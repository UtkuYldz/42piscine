#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	char	strng;
	int		index;
	bool	x;

	x = true;
	index = 0;
	while (true)
	{
		strng = str[index];
		if (strng == '\0')
		{
			break ;
		}
		if (!(strng >= ' ' || strng == 127))
		{
			x = false;
			break ;
		}
		index++;
	}
	return (x);
}
