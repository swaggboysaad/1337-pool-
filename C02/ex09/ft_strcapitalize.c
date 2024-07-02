#include <stdio.h>

char	*ft_strcapitalize(char *str)		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] -'a'+'A';
			
		}
		i++;
	return str;
}
int main()
{	
	char str[] = "saad zaoual";
	char *result = ft_strcapitalize(str);
	printf("%s \n",result);
}
