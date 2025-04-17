
#include "libft.h"
#include <ctype.h>

void	test_ft_toupper(int c)
{
	int		c1;
	int		c2;
	char	*result;

	c1 = ft_toupper(c);
	c2 = toupper(c);
	if (c1 == c2)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_toupper('%c') = %c | toupper('%c') = %c => %s\n",
		c, c1, c, c2, result);
}

int	main(void)
{
	test_ft_toupper('a');
	test_ft_toupper('z');
	test_ft_toupper('A');
	test_ft_toupper('1');
	test_ft_toupper('$');
	return (0);
}
