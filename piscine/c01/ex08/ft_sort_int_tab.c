void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	i = 0;
	while (i < size-1)
	{
		j=i+1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;		
			}
			j++;
		}
		
		i++;
	}	
}
/*
#include <stdio.h>
int main(){

	int arr[] = {6,7,2,9,12,3,2,1};
	ft_sort_int_tab(arr,8);
	
	int i = 0;
	while(i<8){
		printf("%d", arr[i]);
		i++;
	}
}*/
