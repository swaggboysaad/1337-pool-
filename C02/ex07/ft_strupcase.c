#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] >='a' && str[i] <='z')
		{
			str[i] = str[i]-32;
		}
		i++;
	}
}
int main()
{
	char str[] = "saad zaoual";
	ft_strupcase(str);
	printf("%s \n",str);
}
