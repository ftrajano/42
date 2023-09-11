#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_of_int;
	int	i;
	int *final;

	i = min;
	array_of_int = (int*)malloc(sizeof(int)*(max-min+1));
	final = array_of_int;
	if (min >= max)
	{
		return array_of_int;
	}
	while (i < max)
	{
		*array_of_int = i;
		array_of_int++;
		i++;
	}
	return final;
}
/*
#include <stdio.h>
int main(){

	int j = 0;
	int *l1 = ft_range(1,10);
	while (l1[j] != '\0'){
		printf("%d", l1[j]);
		j++;
	}

}
*/