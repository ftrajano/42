int     ft_str_is_uppercase(char *str)
{
    int     i;
    
    i = 0;
    if(str[0]=='\0')
    {
        return 1;
    }

    while(str[i] != '\0')
    {
        if(str[i] < 65 || str[i] > 90)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

#include <stdio.h>

int main()
{
    char arr[] = "asdffdas1";
    char arr2[] = "ASDFJE";
    printf("%i", ft_str_is_uppercase(arr));
    printf("%i", ft_str_is_uppercase(arr2));

}