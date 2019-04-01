
#include "../includes/libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    return (!(strncmp(s1, s2, n)));
}
