int     ft_str_is_lowercase(char *str)
{
    int     i;
    
    i = 0;
    if(str[0]=='\0')
    {
        return 1;
    }

    while(str[i] != '\0')
    {
        if(str[i] < 97 || str[i] > 123)
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
    char arr2[] = "fasdfasd";
    printf("%i", ft_str_is_lowercase(arr));
    printf("%i", ft_str_is_lowercase(arr2));
}