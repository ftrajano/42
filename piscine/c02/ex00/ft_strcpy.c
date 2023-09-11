char	*ft_strcpy(char dest[], char src[])
{
	int	i;
    	
	i = 0;
	while (src[i] != '\0')
    	{
		dest[i] = src[i];
		i++;
    	}    
	dest[i] = '\0';
    	return dest;
}


#include <stdio.h>

int main(){
    char    src[] = "Hello, World!";
    char    dest[] = "Goodbye, World";
    char    src1[] = "Hello World!";
    char    dest1[] = "Goodbye World!";
    char    src2[] = "testando!";
    char   *dest2;
    

    ft_strcpy(dest, src);
    ft_strcpy(dest1, src1);
    ft_strcpy(dest2, src2);
    

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("src1: %s\n", src1);
    printf("dest1: %s\n", dest1);
    printf("src2: %s\n", src2);
    printf("dest2: %s\n", dest2);
    return 0;
}
