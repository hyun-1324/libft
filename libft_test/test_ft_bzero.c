# include "../libft/libft.h"
#include <string.h>

void	test_ft_bzero(void)
{
	char    a[10] = "abcdefghi";
	char    b[10] = "abcdefghi";
	char    *result;

	ft_bzero(a, 5);
	bzero(b, 5);
	if (memcmp(a, b, (long unsigned int)100) == 0)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_bzero test => %s\n", result);
}

int	main(void)
{
	test_ft_bzero();
	return (0);
}
