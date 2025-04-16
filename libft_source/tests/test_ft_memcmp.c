#include "libft.h"
#include <string.h>

void	test_ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		ft_res;
	int		lib_res;
	char	*result;

	ft_res = ft_memcmp(s1, s2, n);
	lib_res = memcmp(s1, s2, n);
	if ((ft_res == 0 && lib_res == 0) || (ft_res * lib_res > 0))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_memcmp(\"%s\", \"%s\", %zu) => %s\n", (char *)s1, (char *)s2, n, result);
}


int	main(void)
{
	test_ft_memcmp("abcdef", "abcdef", 6);
	test_ft_memcmp("abcdef", "abcdez", 6);
	test_ft_memcmp("abcdef", "abcdee", 6);
	test_ft_memcmp("abcdef", "abcdff", 4);
	test_ft_memcmp("abc\0xx", "abc\0yy", 6);
	test_ft_memcmp("abc", "abcde", 3);
	test_ft_memcmp("12345", "123", 2);
	test_ft_memcmp("zzzzz", "aaaaa", 5);
	return (0);
}
