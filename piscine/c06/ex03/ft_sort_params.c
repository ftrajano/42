#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i]-s2[i]);
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	char	*temp;
	int	n;
	int	i;
	int	j;

	i = 1; 
	while (i < argc-1)
	{	
		j=i+1;
		while (j < argc)
		{
			if(ft_strcmp(argv[i],argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;			
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
		}
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}

}
