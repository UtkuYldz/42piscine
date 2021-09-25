#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	harf;
	int	tutma;

	harf = 0;
	while (harf < size / 2)
	{
		tutma = tab[harf];
		tab[harf] = tab[size - 1 - harf];
		tab[size - 1 - harf] = tutma;
		harf++;
	}
}
