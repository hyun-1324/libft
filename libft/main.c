
#include "libft.h"
#include <limits.h>


int	main(void)
{
	int	result;

	result = ft_atoi("-2147483648");
	printf("%i\r\n", result);
	printf("%d\n", INT_MIN);
	return (0);
}
