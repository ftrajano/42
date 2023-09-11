
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*duplicate;
	char *final;
	
	
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	duplicate = (char*)malloc(sizeof(char)*(i+1));
	final = duplicate;
	if (!duplicate)
	{
		return duplicate;
	}
	while (*src)
	{
		*duplicate = *src;
		duplicate++;
		src++;
	}
	return final;
}
/*
#include <stdio.h>
int main(){

	char *c = "name";
	char *duplicate = ft_strdup(c);
	printf("%s", duplicate);
}*/