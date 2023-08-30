#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    int     i;
    
    i = 0;
    if (str[0] == '\0')
    {
        return 1;
    }
    while(str[i] != '\0')
    {
        if(str[i] < 32 || str[i] > 126){
            return 0;
        }
        i++;
    }
    return 1;
}


void test_ft_str_is_printable(char *str)
{
    int result = ft_str_is_printable(str);
    if (result)
    {
        printf("The string \"%s\" is printable.\n", str);
    }
    else
    {
        printf("The string \"%s\" is NOT printable.\n", str);
    }
}


int main()
{
    // Test with all printable characters
    test_ft_str_is_printable("Hello, World!");

    // Test with a non-printable character (ASCII value 27)
    test_ft_str_is_printable("Hello\x1B");

    // Test with an empty string
    test_ft_str_is_printable("");

    // Test with string containing only spaces
    test_ft_str_is_printable("    ");

    return 0;
}