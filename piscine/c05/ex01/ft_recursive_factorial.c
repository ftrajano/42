int ft_iterative_factorial(int nb)
{
	if (nb==1)
	{
		return 1;
	}
	else
	{
		return (nb*ft_iterative_factorial(nb-1));
	}
}	

#include <stdio.h>
int main(){
	printf("%d",ft_iterative_factorial(5));
}

