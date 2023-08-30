char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' || i<=n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i<=n){
        dest[i] = '\0';
    }
    return dest;

}

// 1 - Por que ele não pegou só as 3 primeiras letras do hello e colocou na 
// segunda string?

#include <stdio.h>

int main(){

    char src[] = "Hello";
    char dest[] = "aslkdjfklasdjfoiawsjf";
    int n = 3;
    ft_strncpy(dest, src, n);
    printf("%s", dest);

}