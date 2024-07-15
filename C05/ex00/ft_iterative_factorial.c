#include <unistd.h>
int	ft_iterative_factorial(int nb)
{
	int i = 1;

	if(nb < 0)
	{
		return 0;
	}
	while(nb > 0)
	{
		i *= nb;
		nb--;
	}
	return i;
}
