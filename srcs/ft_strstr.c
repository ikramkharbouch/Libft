
#include "../includes/libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    size_t count;

    i = 0;
    count = 0;
    while (haystack[i])
    {
        while (haystack[i] == needle[i])
        {
            i++;
            count++;
        }
        if (count == ft_strlen(needle))
            return ((char *)haystack);
        i++;
    }
    return (NULL);
}
