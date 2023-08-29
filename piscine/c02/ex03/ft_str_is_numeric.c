int     ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    if(str[0]=='\0'){
        return 0;
    }

    while(str[i] !='\0')
    {
        if(str[i] < 48 || str[i]>57)
        {
            return 0;
        }
        i++;

    }
    return 1;
}

#include <stdio.h>
int main(){
    char arr[] = "fasdfas2";
    char arr2[] = "123321";
    char arr3[] = "";

    printf("%i", ft_str_is_numeric(arr));
    printf("%i", ft_str_is_numeric(arr2));
    printf("%i", ft_str_is_numeric(arr3));
}