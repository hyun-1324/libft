
#include "libft.h"
#include <ctype.h>

void	test_ft_isdigit(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_isdigit(c);
	c2 = isdigit(c);
	if ((!!c1) == (!!c2))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_isdigit('%c') = %d | isdigit('%c') = %d => %s\n", \
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_isdigit('0');
	test_ft_isdigit('5');
	test_ft_isdigit('9');
	test_ft_isdigit('a');
	test_ft_isdigit(' ');
	test_ft_isdigit(-1);
	return (0);
}
