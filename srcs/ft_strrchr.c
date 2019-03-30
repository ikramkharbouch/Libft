
#include "../includes/libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int index;

    i = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] == c)
            index = i;
        i++;
    }
    i = 0;
    while (s[i])
    {
        if (i == index)
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}


