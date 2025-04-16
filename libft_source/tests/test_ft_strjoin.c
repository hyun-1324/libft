
#include "libft.h"
#include <string.h>

void	test_ft_strjoin(const char *s1, const char *s2)
{
	char	*ft_res;
	char	*expected;
	char	*result;

	ft_res = ft_strjoin(s1, s2);
	if (!s1 || !s2)
		expected = NULL;
	else
	{
		size_t	len1 = ft_strlen(s1);
		size_t	len2 = ft_strlen(s2);
		expected = (char *)malloc(len1 + len2 + 1);
		if (expected)
		{
			memcpy(expected, s1, len1);
			memcpy(expected + len1, s2, len2);
			expected[len1 + len2] = '\0';
		}
	}

	if ((ft_res && expected && strcmp(ft_res, expected) == 0) || (!ft_res && !expected))
		result = "PASS";
	else
		result = "FAIL";

	printf("ft_strjoin(\"%s\", \"%s\") => \"%s\" | %s\n",
		s1 ? s1 : "NULL", s2 ? s2 : "NULL", ft_res ? ft_res : "NULL", result);

	free(ft_res);
	free(expected);
}

int	main(void)
{
	test_ft_strjoin("Hello", "World");
	test_ft_strjoin("42", "Seoul");
	test_ft_strjoin("", "World");
	test_ft_strjoin("Hello", "");
	test_ft_strjoin("", "");
	test_ft_strjoin(NULL, "Test");
	test_ft_strjoin("Test", NULL);
	test_ft_strjoin(NULL, NULL);
	test_ft_strjoin("A very very long string... ", "concatenated with another long string");
	return (0);
}
