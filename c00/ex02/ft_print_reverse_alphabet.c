#include<stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 1;
	c = 'z';
	while (i < 27)
	{
		write (1, &c, 1);
		c--;
		i++;
	}
}
