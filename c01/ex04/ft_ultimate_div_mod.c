#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	reste;

	reste = *a % *b;
	*a = *a / *b;
	*b = reste;
}
