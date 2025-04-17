#include "libft.h"
#include <string.h>

void	test_ft_memset(void *input, int c, size_t n, const char *desc)
{
	char	buf1[100];
	char	buf2[100];

	memcpy(buf1, input, 100);
	memcpy(buf2, input, 100);

	ft_memset(buf1, c, n);
	memset(buf2, c, n);

	if (memcmp(buf1, buf2, 100) == 0)
		printf("ft_memset test (%s): PASS\n", desc);
	else
		printf("ft_memset test (%s): FAIL\n", desc);
}

int	main(void)
{
	char	data1[100] = "Hello, World!";
	char	data2[100] = "Hello, World!";
	char	data3[100] = "";
	char	data4[100] = "xxxxxxxxxxxx";

	test_ft_memset(data1, 'A', 5, "Set first 5 chars to 'A'");
	test_ft_memset(data2, 0, 5, "Set first 5 chars to null byte");
	test_ft_memset(data3, 'B', 10, "Empty string fill");
	test_ft_memset(data4, 'Z', 0, "Zero bytes write");
	return (0);
}
