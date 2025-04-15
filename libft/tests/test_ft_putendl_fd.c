#include "libft.h"

void	test_ft_putendl_fd(void)
{
	printf("ft_putendl_fd(\"Line test\", 1): ");
	fflush(stdout);
	ft_putendl_fd("Line test", 1);
}

int	main(void)
{
	test_ft_putendl_fd();
	return (0);
}
