
#include "../includes/libft.h"

int         main(void)
{
    char    p[50];

    ft_strcpy(p, "abcdef");
    printf("|%s|\n", p);
    printf("|%s|\n", ft_strsub(p, 2, 3));
    return (0);
}
