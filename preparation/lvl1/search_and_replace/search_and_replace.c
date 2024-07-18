#include <unistd.h>
void	search_and_replace(char *str,char a, char b)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == a)
		{
			write(1,&b,1);
		}
		else
			write(1,&str[i],1);
		i++;
	}
}
int main(int ac, char **av)
{
	int i = 0;

	if(ac == 4 && !(av[2][1] || av[3][1]))
	{
		search_and_replace(av[1],*av[2],*av[3]);
	}
	write(1,"\n",1);
}
