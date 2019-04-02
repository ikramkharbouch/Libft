
#include "../includes/libft.h"

int         main(void)
{
    char    p[50];

    ft_strcpy(p, "   1234   ");
    printf("|%s|\n", p);
    printf("|%s|\n", ft_strsub(p, 3, 4));
    return (0);
}
