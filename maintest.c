#include <stdio.h>
#include "libft.h"

int main(void)
{
	char test[] = "123456789\0";
	printf("[%s]\n", test);
	ft_memset(test, 'A', 9);
	printf("[%s]\n", test);
	return (0);
}
