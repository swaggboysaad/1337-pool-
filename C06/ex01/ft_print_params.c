#include <unistd.h>
int ft_strlen(char *str)
{
        int i = 0;
        while(str[i])
        {
                i++;
        }
        return i;
}
int main(int argc, char **argv)
{
	int i = 1;
        if(argc > 1)
        {
		while(argv[i])
		{
			write(1,argv[i],ft_strlen(argv[i]));
			write(1,"\n",1);
			i++;
		}
        }
        return 0;
}
