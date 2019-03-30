
#include "../includes/libft.h"

int     ft_toupper(int arg)
{
    if (arg >= 'a' && arg <= 'z')
        arg -= 32;
    return (arg);
}
