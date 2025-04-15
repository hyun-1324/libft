
#include "libft.h"

void	test_ft_putchar_fd(void)
{
	printf("ft_putchar_fd('A', 1): ");
	fflush(stdout);
	ft_putchar_fd('A', 1);
	printf("\n");
}

int	main(void)
{
	test_ft_putchar_fd();
	return (0);
}
