void    ft_rev_int_tab(int *tab, int size){

	int	i;
	int	tmp;

	i = 0;
	while (i < size/2)
	{
		tmp = tab[i];
		tab[i] = tab[size-1-i];
		tab[size-1-i] = tmp;	
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	ft_rev_int_tab(arr, 5);
	int i = 0;
	while(i<5)
	{
		printf("%d", arr[i]);
		i++;
	}
}*/
