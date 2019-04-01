
#include "../includes/libft.h"

int     main(void)
{
    char s1[50];
    char s2[50];

    ft_strcpy(s1, "12345");
    ft_strcpy(s2, "3");
    printf("|%s|\n", ft_strstr(s1, s2));
    printf("|%s|\n", strstr(s1, s2));
    return (0);
}
