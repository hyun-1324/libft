#include "libft.h"
#include <string.h>

void	test_ft_strlcpy(const char *src, size_t dstsize)
{
	char	dst1[100];
	char	dst2[100];
	size_t	ft_res;
	size_t	lib_res;
	char	*result;

	memset(dst1, 'X', sizeof(dst1));
	memset(dst2, 'X', sizeof(dst2));

	ft_res = ft_strlcpy(dst1, src, dstsize);
	lib_res = strlcpy(dst2, src, dstsize);

	if (ft_res == lib_res && strcmp(dst1, dst2) == 0)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_strlcpy(\"%s\", dstsize=%zu) => %s\n", src, dstsize, result);
}

int	main(void)
{
	test_ft_strlcpy("Hello World!", 20);
	test_ft_strlcpy("Hello World!", 5);
	test_ft_strlcpy("Hi", 3);
	test_ft_strlcpy("Hi", 2);
	test_ft_strlcpy("", 5);
	test_ft_strlcpy("Hello", 0);
	test_ft_strlcpy("A very very long string to overflow", 10);
	return (0);
}
