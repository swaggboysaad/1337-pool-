#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else{
			return (0);
		}
	}
	return (1);
}
int main()
{
	char str[] = "";
	int resault = ft_str_is_numeric(str);
	printf("%i \n", resault);
}
