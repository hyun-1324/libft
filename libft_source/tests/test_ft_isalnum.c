
#include "libft.h"
#include <ctype.h>

void	test_ft_isalnum(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_isalnum(c);
	c2 = isalnum(c);
	if ((!!c1) == (!!c2))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_isalnum('%c') = %d | isalnum('%c') = %d => %s\n", \
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_isalnum('a');
	test_ft_isalnum('Z');
	test_ft_isalnum('5');
	test_ft_isalnum('%');
	test_ft_isalnum('\n');
	return (0);
}
