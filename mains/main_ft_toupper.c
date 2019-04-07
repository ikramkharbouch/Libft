
#include "../includes/libft.h"

int     main()
{
    printf("%c becomes %c\n",'a',ft_toupper('a'));
    printf("%c becomes %c\n",'a',toupper('a'));
    printf("%c becomes %c\n",'0',ft_toupper('0'));
    printf("%c becomes %c\n",'0',toupper('0'));
    printf("%c becomes %c\n",'+',ft_toupper('+'));
    printf("%c becomes %c\n",'+',toupper('+'));
    printf("%c becomes %c\n",'A',ft_toupper('A'));
    printf("%c becomes %c\n",'A',toupper('A'));
    return (0);
}

