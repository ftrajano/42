#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] '\0')
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
	char	*m;
	int	n;
	int	i;
	int	j;

	i = 0;
	while (i < argc-1)
	{	
		j=i+i
		m = argv[i];
		while (j < argc-1)
		{
			if(ft_strcmp(
