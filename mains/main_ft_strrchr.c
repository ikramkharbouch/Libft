
#include "../includes/libft.h"

int     main()
{
    char s[50];

    ft_strcpy(s, "meme");
    printf("|%s|\n", ft_strrchr(s, 'e'));
    printf("|%s|\n", strrchr(s, 'e'));
    return (0);
}



