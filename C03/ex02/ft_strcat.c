#include <stdio.h>
char	*ft_strcat(char	*dest,char *src)
{
	int i = 0;
	int j = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char s1[] = "saad";
	char s2[] = "svdighdipgyeqIYE'IGYGOEYGOUQTGd";
	printf("res = %s \n", ft_strcat(s1,s2));
}
