int    ft_strcmp(char *s1, char *s2)
{
    int     i;
    
    i = 0;
    while (s1[i] == s2[i] ){
        i++;
    }
    if (s1[i] > s2[i]){
        return (s1[i] - s2[i]);
    }
    else
    {
        return (s2[i] - s1[i]);
    }

}
/*
#include <stdio.h>

int main(){
    char s1[] = "abracadabra";
    char s2[] = "bola";
    char s3[] = "cachorro";
    char s4[] = "abacate";
    printf("%i\n", ft_strcmp(s1, s2));
    printf("%i\n", ft_strcmp(s1, s3));
    printf("%i\n", ft_strcmp(s1, s4));
}
*/


