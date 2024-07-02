#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i = 0;

	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return 0;
}
int main()
{
	char src[] = "hello bro";
	char dest[100];
	int n = 5;
	ft_strncpy(dest, src,n);
	printf("%s \n" , dest);
	return (0);
}
