int	ft_iterative_power(int nb, int power)
{
	int	ans;

	if (power < 0)
		return (0);
	ans = 1;
	while (power-- > 0)
		ans *= nb;
	return (ans);
}
