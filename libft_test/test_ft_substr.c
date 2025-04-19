
#include "libft.h"
#include <string.h>

void	test_ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*ft_res;
	char		*expected;
	char		*result;
	size_t		s_len;

	ft_res = ft_substr(s, start, len);
	if (!s)
		expected = NULL;
	else
	{
		s_len = ft_strlen(s);
		if ((size_t)start >= s_len || len == 0)
			expected = strdup("");
		else
		{
			size_t available = s_len - (size_t)start;
			size_t final_len = len > available ? available : len;
			expected = strndup(s + start, final_len);
		}
	}

	if ((ft_res && expected && strcmp(ft_res, expected) == 0) || (!ft_res && !expected))
		result = "PASS";
	else
		result = "FAIL";

	printf("ft_substr(\"%s\", %u, %zu) => \"%s\" | %s\n",
		s ? s : "NULL", start, len, ft_res ? ft_res : "NULL", result);

	free(ft_res);
	free(expected);
}

int	main(void)
{
	test_ft_substr("Hello, World!", 0, 5);
	test_ft_substr("Hello, World!", 7, 5);
	test_ft_substr("Hello", 10, 3);
	test_ft_substr("Hello", 3, 10);
	test_ft_substr("", 0, 5);
	// test_ft_substr(NULL, 0, 5);
	test_ft_substr("42hive", 0, 0);
	test_ft_substr("abcdef", 2, 3);
	test_ft_substr("abcdef", 2, 20);
	return (0);
}
