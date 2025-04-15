#include "libft.h"
#include <string.h>

void	test_ft_strlcat(const char *initial_dst, const char *src, size_t dstsize)
{
	char	dst1[100];
	char	dst2[100];
	size_t	ft_res;
	size_t	lib_res;
	char	*result;

	memset(dst1, 0, sizeof(dst1));
	memset(dst2, 0, sizeof(dst2));
	strlcpy(dst1, initial_dst, sizeof(dst1));
	strlcpy(dst2, initial_dst, sizeof(dst2));

	ft_res = ft_strlcat(dst1, src, dstsize);
	lib_res = strlcat(dst2, src, dstsize);

	if (ft_res == lib_res && strcmp(dst1, dst2) == 0)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_strlcat(\"%s\", \"%s\", %zu) => %s\n",initial_dst, src, dstsize, result);
}

int main(void)
{
	test_ft_strlcat("Hello ", "World!", 20);
	test_ft_strlcat("Hello ", "World!", 10);
	test_ft_strlcat("Hello ", "World!", 5);
	test_ft_strlcat("", "World!", 10);
	test_ft_strlcat("Hello", "", 10);
	test_ft_strlcat("", "", 5);
	test_ft_strlcat("Hello", "World!", 0);
	test_ft_strlcat("HelloHelloHello", "World!", 10);
	return (0);
}
