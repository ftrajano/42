char    *ft_strcpy(char *dest, char *src)
{
    char*   dest_copy;
    
    dest_copy = dest;
    
    while (*src && *dest != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    while (*dest)
    {
        *dest = '\0';
        dest++;
    }
    return (dest);

}


// Create a main function that should test your function with the following inputs:
// 1. src = "Hello World!", dest = "Goodbye World!"
// 2. src = "Hello World!", dest = ""
// 3. src = "", dest = "Goodbye World!"
// 4. src = "", dest = ""

#include <stdio.h>

int     main(void)
{
    char    *src1 = "Hello World!";
    char    dest1[] = "Goodbye World!";
    char    *src2 = "Hello World!";
    char    dest2[] = "";
    char    src3[] = "";
    char    dest3[] = "Goodbye World!";
    char    src4[] = "";
    char    dest4[] = "";

    ft_strcpy(dest1, src1);
    ft_strcpy(dest2, src2);
    ft_strcpy(dest3, src3);
    ft_strcpy(dest4, src4);

    printf("src1: %s\n", src1);
    printf("dest1: %s\n", dest1);
    printf("src2: %s\n", src2);
    printf("dest2: %s\n", dest2);
    printf("src3: %s\n", src3);
    printf("dest3: %s\n", dest3);
    printf("src4: %s\n", src4);
    printf("dest4: %s\n", dest4);

    return (0);
}