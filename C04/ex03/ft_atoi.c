int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	
		while((str[i] == ' ') ||(str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		while((str[i] == '-') || (str[i] == '+'))
		{
			if(str[i] == '-')
			{
				sign = sign * -1;
			}
			str++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 +(str[i] - '0');
			str++;
		}

	return result * sign;
}
