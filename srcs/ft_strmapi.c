
#include "../includes/libft.h"

char                *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    return (str);
}
