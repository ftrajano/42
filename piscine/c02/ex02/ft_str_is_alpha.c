int     ft_str_is_alpha(char *str)
{
    int i;

    i=0;
    while(str[i] != '\0')
    {
        if((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 123))
        {
            return 0;
        }
        i++;
    }
    return 1;

}

#include <stdio.h>
int main(){

    int i = ft_str_is_alpha("fasdflkjr");
    int j = ft_str_is_alpha("f98237-ewr-0sdfs-[[]/");
    printf("i: %i, j: %i", i, j);


}