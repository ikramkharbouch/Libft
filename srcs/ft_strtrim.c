#include "../includes/libft.h"

int     is_whitespace(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

char        *ft_strtrim(char const *s)
{
    char const      *tmp;
    unsigned int    start;
    size_t          len;

    tmp = s;
    start = 0;
    while(is_whitespace(*s))
    {
        start++;
        s++;
    }
    while(*s)
        s++;
    s--;
    while(is_whitespace(*s))
        s--;
    len = (s - (s - start)) + 1;
    printf("start = %d\nlength = %zu\n", start, len);
    return (ft_strsub(tmp, start, len));
}
