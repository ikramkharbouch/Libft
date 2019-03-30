
#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z')
        return (1);
	return (0);
}
