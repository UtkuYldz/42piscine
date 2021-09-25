#include <unistd.h>

void	short2(char d, char e, char f)
{
	write (1, &d, 1);
	write (1, &e, 1);
	write (1, &f, 1);
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				short2 (d, e, f);
				if (d != '7' || e != '8' || f != '9')
					write (1, ", ", 2);
				f++;
			}
			e++;
		}
		d++;
	}
}
