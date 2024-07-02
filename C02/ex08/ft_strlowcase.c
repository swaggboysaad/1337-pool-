#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}
int main()
{
	char str[] ="SAAD ZAOUAL";
	ft_strlowcase(str);
	printf("%s \n" , str);
}
