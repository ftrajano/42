char*    ft_strcpy(char dest[], char src[])
{
    int     i;

    i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    if (dest[i] != '\0'){
        while (dest[i] != '\0')
        {
            dest[i] = '\0';
            i++;
        }
    }
    return dest;
}

#include <stdio.h>

int main(){
    char    src[] = "Hello, World!";
    char    dest[] = "Goodbye, World";
    char    src1[] = "Hello World!";
    char    dest1[] = "Goodbye World!";
    char    src2[] = "Hello World!";
    char    dest2[] = "";
    char    src3[] = "";
    char    dest3[] = "Goodbye World!";
    char    src4[] = "";
    char    dest4[] = "";

    ft_strcpy(dest1, src1);
    ft_strcpy(dest2, src2);
    ft_strcpy(dest3, src3);
    ft_strcpy(dest4, src4);
    ft_strcpy(dest, src);

    printf("src1: %s\n", src1);
    printf("dest1: %s\n", dest1);
    printf("src2: %s\n", src2);
    printf("dest2: %s\n", dest2);
    printf("src3: %s\n", src3);
    printf("dest3: %s\n", dest3);
    printf("src4: %s\n", src4);
    printf("dest4: %s\n", dest4);
    printf("%s", dest);
    return 0;
}