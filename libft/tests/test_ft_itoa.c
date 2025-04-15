
#include "libft.h"

void	test_ft_itoa(int n)
{
	char	*res;

	res = ft_itoa(n);
	printf("Input: %d | Result: \"%s\"\n", n, res ? res : "NULL");
	free(res);
}

int	main(void)
{
	test_ft_itoa(0);
	test_ft_itoa(42);
	test_ft_itoa(-42);
	test_ft_itoa(123456);
	test_ft_itoa(-123456);
	test_ft_itoa(2147483647);   // INT_MAX
	test_ft_itoa(-2147483648);  // INT_MIN
	test_ft_itoa(1);
	test_ft_itoa(-1);
	return (0);
}
