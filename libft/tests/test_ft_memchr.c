#include "libft.h"
#include <string.h>

void	test_ft_memchr(const char *input, int c, size_t n)
{
	void	*ft_res;
	void	*lib_res;
	char	*result;

	ft_res = ft_memchr(input, c, n);
	lib_res = memchr(input, c, n);
	if ((ft_res == lib_res) || (ft_res && lib_res && strcmp(ft_res, lib_res) == 0))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_memchr(\"%s\", '%c', %zu) => %s\n", input, c, n, result);
}

int main(void)
{
	test_ft_memchr("abcdef", 'd', 6);
	test_ft_memchr("abcdef", 'x', 6);
	test_ft_memchr("abcdef", 'a', 1);
	test_ft_memchr("abcdef", 'e', 4);
	test_ft_memchr("a\0bcd", '\0', 5);
	test_ft_memchr("", 'a', 1);
	test_ft_memchr("abcdef", 0, 6);
	return (0);
}
