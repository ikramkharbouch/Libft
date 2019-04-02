#include "../includes/libft.h"

char        *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}
