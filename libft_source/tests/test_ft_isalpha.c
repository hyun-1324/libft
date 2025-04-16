
#include "libft.h"
#include <ctype.h>

void	test_ft_isalpha(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_isalpha(c);
	c2 = isalpha(c);
	if ((!!c1) == (!!c2))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_isalpha('%c') = %d | isalpha('%c') = %d => %s\n", \
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_isalpha('a');
	test_ft_isalpha('Z');
	test_ft_isalpha('1');
	test_ft_isalpha('%');
	test_ft_isalpha(0);
	test_ft_isalpha(127);
	test_ft_isalpha(-1);
	return (0);
}
