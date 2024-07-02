#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;

	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return (1);
}
int main()
{
	char str[] = "Hell%$^orld";
	int resault = ft_str_is_alpha(str);
	printf("%i \n",resault);
	return 0;
}
