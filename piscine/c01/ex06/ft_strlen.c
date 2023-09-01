// #include <stdio.h>

int    ft_strlen(char *str){
    
    int counter;

    while(*str)
    {
        counter++;
        str++;
    }
    return counter;
}

// int main(){

//     //print the value of ft_strlen() with the string "Hello World!"
//     printf("%d\n", ft_strlen("Hello World!")); // 12

// }
