
#include "libft.h"
#include <ctype.h>

void	test_ft_isprint(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_isprint(c);
	c2 = isprint(c);
	if ((!!c1) == (!!c2))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_isprint('%c') = %d | isprint('%c') = %d => %s\n", \
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_isprint(31);
	test_ft_isprint(32);
	test_ft_isprint('A');
	test_ft_isprint('~');
	test_ft_isprint(127);
	return (0);
}
