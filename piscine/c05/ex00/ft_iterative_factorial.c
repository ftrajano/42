int ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result*=i;
		i++;
	}
	return (result);
}

#include <stdio.h>

int main(){
	printf("%d", ft_iterative_factorial(5));
}
