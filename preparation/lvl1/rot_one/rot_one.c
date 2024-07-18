#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
char	rot_one(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'y')
		{
			ft_putchar(str[i] + 1);
		}
		else if(str[i] == 'z')
		{
			ft_putchar('a');
		}
		else if(str[i] >= 'A' && str[i] <= 'Y')
		{
			ft_putchar(str[i] + 1);
		}
		else if(str[i] == 'Z')
		{
			ft_putchar('A');
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main(int ac , char **av)
{
	int i = 0;

	if(ac == 2)
	{
		rot_one(av[1]);	
	}
	write(1,"\n",1);
}
