#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char src[] = "saad";
	char dest[50];
	ft_strcpy(dest,src);
	printf("%s \n",dest);
}
