int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			break ;
		i++;
	}
	return (0);
}
