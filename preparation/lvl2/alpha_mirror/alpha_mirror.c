#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
char ft_mirror(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar('m' -(str[i] - 'n'));
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar('M' -(str[i] - 'N'));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_mirror(av[1]);
	}
	write(1,"\n",1);
}
