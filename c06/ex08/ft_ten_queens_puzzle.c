#include <unistd.h>

#define BOARD_SIZE 10

void	print_array(int *arr)
{
	int	i;
	int	z;

	i = 0;
	while (i < BOARD_SIZE)
	{
		z = arr[i] + '0';
		write(1, &z, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	the_controll(int value, int index, int *arr)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (arr[i] == value)
		{
			return (0);
		}
		else if (arr[i] + (index - i) == value || arr[i] - (index - i) == value)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	the_main_func(int index, int *arr, int *ans, int i)
{
	while (i < BOARD_SIZE)
	{
		if (index == 0)
		{
			arr[index] = i;
			the_main_func(index + 1, arr, ans, 0);
		}
		else
		{
			if (the_controll(i, index, arr))
			{
				arr[index] = i;
				if (index < BOARD_SIZE - 1)
					the_main_func(index + 1, arr, ans, 0);
				else
				{
					*ans += 1;
					print_array(arr);
				}
			}
		}
		i++;
	}	
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[BOARD_SIZE];
	int	ans;

	ans = 0;
	the_main_func(0, arr, &ans, 0);
	return (ans);
}
