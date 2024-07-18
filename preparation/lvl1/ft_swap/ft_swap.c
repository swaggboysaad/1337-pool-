#include <stdio.h>
void	ft_swap(int *a,int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
int main()
{
	int a = 30;
	int b = 20;
	ft_swap(&a,&b);
	printf("%i %i \n",a , b);
}
