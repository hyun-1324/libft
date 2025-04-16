#include "libft.h"
#include <string.h>

void	test_ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ft_res;
	char	*lib_res;
	char	*result;

	ft_res = ft_strnstr(big, little, len);
	lib_res = strnstr(big, little, len);
	if ((ft_res && lib_res && strcmp(ft_res, lib_res) == 0) || ft_res == lib_res)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_strnstr(\"%s\", \"%s\", %zu) => %s\n", big, little, len, result);
}

int main(void)
{
	test_ft_strnstr("Foo Bar Baz", "Bar", 11);
	test_ft_strnstr("Foo Bar Baz", "Bar", 5);
	test_ft_strnstr("Hello World", "World", 11);
	test_ft_strnstr("Hello World", "World", 7);
	test_ft_strnstr("Test", "", 4);
	test_ft_strnstr("", "abc", 0);
	test_ft_strnstr("", "", 1);
	test_ft_strnstr("abcdabcd", "bcd", 8);
	test_ft_strnstr("abcdabcd", "bce", 8);
	test_ft_strnstr("abc\0def", "def", 7);
	return (0);
}
