#include <stdio.h>
char	ft_strncmp(char *s1,char *s2,unsigned int n)
{
	unsigned int i = 0;
	while(s1[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return(s1[0]);
}
int main()
{
	char s1[] = "saad";
	char s2[] = "saad";
	int n = 5;
	printf("i = %d \n",ft_strncmp(s1,s2,n));
}
