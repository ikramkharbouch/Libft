
#include "../includes/libft.h"

int     main()
{
    printf("%c becomes %c\n",'A', ft_tolower('A'));
    printf("%c becomes %c\n",'A', tolower('A'));
    printf("%c becomes %c\n",'0', ft_tolower('0'));
    printf("%c becomes %c\n",'0', tolower('0'));
    printf("%c becomes %c\n",'b', ft_tolower('b'));
    printf("%c becomes %c\n",'b', tolower('b'));
    return (0);
}
