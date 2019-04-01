
#include "../includes/libft.h"

int         main(void)
{
    char    p1[50];
    char    p2[50];

    ft_strcpy(p1, "1234");
    ft_strcpy(p2, "1234");
    printf("%d\n", ft_strequ(p1, p2));
    printf("%d\n", ft_strcmp(p1, p2));
    return (0);
}
