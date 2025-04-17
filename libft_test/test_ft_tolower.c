
#include "libft.h"
#include <ctype.h>

void	test_ft_tolower(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_tolower(c);
	c2 = tolower(c);
	if (c1 == c2)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_tolower('%c') = %c | tolower('%c') = %c => %s\n",
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_tolower('A');
	test_ft_tolower('Z');
	test_ft_tolower('a');
	test_ft_tolower('!');
	test_ft_tolower('7');
	return (0);
}
