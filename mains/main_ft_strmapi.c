
#include "../includes/libft.h"

char        strone(unsigned int i, char c)
{
    if (i == 0)
        c = '1';
    return (c);
}

int         main(void)
{
    char    p[50];

    ft_strcpy(p, "abcdef");
    printf("|%s|\n", p);
    printf("|%s|\n", ft_strmapi(p, &strone));
    return (0);
}
