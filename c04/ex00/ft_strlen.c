#include <unistd.h>

int	ft_strlen(char *str)
{
	int	uzunluk;

	uzunluk = 0;
	while (str[uzunluk] != '\0')
	{
		uzunluk++;
	}
	return (uzunluk);
}
