
#include "../includes/libft.h"

int     main(void)
{
    char s1[50];

    ft_strcpy(s1, "12345");
    printf("|%s|\n", ft_strchr(s1, '3'));
    printf("|%s|\n", strchr(s1, '3'));
    return (0);
}
