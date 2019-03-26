#include <stdio.h>
#include <string.h>

int	main()
{
	char str[20] = "hello kwame";
	printf("string : %s\n",str);
	printf("after memset:%s\n",memset(str,'*',3));
	return (0);
}
