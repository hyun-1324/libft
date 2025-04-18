# include "libft.h"
# include <limits.h>

void	test_ft_atoi(const char *str)
{
	int		ft_res;
	int		lib_res;
	char	*result;

	ft_res = ft_atoi(str);
	lib_res = atoi(str);
	if (ft_res == lib_res)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_atoi(\"%s\") = %d | atoi = %d => %s\n", str, ft_res, lib_res, result);
}

int	main(void)
{
	test_ft_atoi("992147483648  ");
	test_ft_atoi("-2147483648  ");
	test_ft_atoi("!@2147483647+");
	test_ft_atoi("  42");
	test_ft_atoi("-42");
	test_ft_atoi(" -- +123abc");
	test_ft_atoi("+7");
	test_ft_atoi(" +  +000123");
	test_ft_atoi("abc");
	return (0);
}
