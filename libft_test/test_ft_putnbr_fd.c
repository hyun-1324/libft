
#include "libft.h"

void	test_ft_putnbr_fd(void)
{
	printf("ft_putnbr_fd(42, 1): ");
	fflush(stdout);
	ft_putnbr_fd(42, 1);
	printf("\n");

	printf("ft_putnbr_fd(2147483647, 1): ");
	fflush(stdout);
	ft_putnbr_fd(2147483647, 1);
	printf("\n");

	printf("ft_putnbr_fd(0, 1): ");
	fflush(stdout);
	ft_putnbr_fd(0, 1);
	printf("\n");
}


int	main(void)
{
	test_ft_putnbr_fd();
	return (0);
}
