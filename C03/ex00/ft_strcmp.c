#include <stdio.h>
int	ft_strcmp(char *s1,char *s2)
{
	int i = 0;
	while(s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[] = "saad";
	char s2[] = "SAAD%(#";
	int res = ft_strcmp(s1,s2);
	printf("res = %i \n",res);
}
