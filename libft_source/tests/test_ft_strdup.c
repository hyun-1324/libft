
#include "libft.h"
#include <string.h>

void	test_ft_strdup(const char *src)
{
	char	*ft_res = ft_strdup(src);
	char	*lib_res = strdup(src);
	char	*result;

	if ((ft_res && lib_res && strcmp(ft_res, lib_res) == 0) || (!ft_res && !lib_res))
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_strdup(\"%s\") => %s\n", src, result);
	free(ft_res);
	free(lib_res);
}

int	main(void)
{
	test_ft_strdup("Hello, World!");
	test_ft_strdup("");
	test_ft_strdup("1234567890");
	test_ft_strdup("Special_!@#$%^&*()");
	test_ft_strdup("A very very very very long string to test duplication...");
	return (0);
}
