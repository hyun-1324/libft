#include "libft.h"

void	test_ft_putstr_fd(void)
{
	printf("ft_putstr_fd(\"Hello, world!\", 1): ");
	fflush(stdout);
	ft_putstr_fd("Hello, world!", 1);
	printf("\n");
}

int	main(void)
{
	test_ft_putstr_fd();
	return (0);
}

