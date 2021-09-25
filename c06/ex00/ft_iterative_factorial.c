int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	n = 1;
	while (nb > 1)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
