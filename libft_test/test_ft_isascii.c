# include "../libft/libft.h"
#include <ctype.h>

void	test_ft_isascii(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_isascii(c);
	c2 = isascii(c);
	if (c1 == c2)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_isascii('%c') = %d | isascii('%c') = %d => %s\n",
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_isascii(0);
	test_ft_isascii(31);
	test_ft_isascii(32);
	test_ft_isascii(65);
	test_ft_isascii(127);
	test_ft_isascii(128);
	test_ft_isascii(-1);
	return (0);
}
