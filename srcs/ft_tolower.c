
#include "../includes/libft.h"

int     ft_tolower(int arg)
{
    if (arg >= 'A' && arg <= 'Z')
        arg += 32;
    return (arg);
}
