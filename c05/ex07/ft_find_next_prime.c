int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	while (1)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				break ;
			if (i == 2)
				i++;
			else
				i += 2;
		}
		if (i == nb || nb == 2147483647)
			return (nb);
		nb++;
	}
}
