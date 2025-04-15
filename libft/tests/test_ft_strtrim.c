#include "libft.h"
#include <string.h>

void	test_ft_strtrim(const char *s1, const char *set)
{
	char	*ft_res;
	char	*expected;
	char	*result;

	ft_res = ft_strtrim(s1, set);
	if (!s1 || !set)
		expected = NULL;
	else
	{
		size_t	start = 0;
		size_t	end = ft_strlen(s1);

		while (start < end && strchr(set, s1[start]))
			start++;
		while (end > start && strchr(set, s1[end - 1]))
			end--;

		expected = strndup(s1 + start, end - start);
	}

	if ((ft_res && expected && strcmp(ft_res, expected) == 0) || (!ft_res && !expected))
		result = "PASS";
	else
		result = "FAIL";

	printf("ft_strtrim(\"%s\", \"%s\") => \"%s\" | %s\n",
		s1 ? s1 : "NULL", set ? set : "NULL", ft_res ? ft_res : "NULL", result);

	free(ft_res);
	free(expected);
}

int	main(void)
{
	test_ft_strtrim("  Hello World  ", " ");
	test_ft_strtrim("...Hello...", ".");
	test_ft_strtrim("---Test---", "-");
	test_ft_strtrim("xxx42xxx", "x");
	test_ft_strtrim("42Seoul", "1234567890");
	test_ft_strtrim("abcabc", "abc");
	test_ft_strtrim("abc", "");
	test_ft_strtrim("", "abc");
	test_ft_strtrim(NULL, "abc");
	test_ft_strtrim("test", NULL);
	test_ft_strtrim(NULL, NULL);
	return (0);
}
