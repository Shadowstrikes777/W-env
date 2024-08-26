#include "header.h"

int main(int ac, char **av)
{
	int len;

	len = 0;
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		ft_printf("%d\n", len);
	}
	return (0);
}

