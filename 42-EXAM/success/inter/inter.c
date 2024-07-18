#include <unistd.h>
void	inter(char *to_find,char *str)
{
	int i = 0;
	int j = 1;
	while(str[i])
	{
		if(str[i] == to_find[j])
		{
			write(1,&str[i],1);
		}
		i++;
		j++;
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		inter(av[1],av[2]);
	}
	write(1,"\n",1);
}
