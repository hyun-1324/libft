#include "libft.h"
#include <string.h>

char	to_uppercase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	index_offset(unsigned int i, char c)
{
	return (c + i);
}

char	invert_case(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

void	test_ft_strmapi(const char *s, char (*f)(unsigned int, char), const char *desc)
{
	char	*res;

	res = ft_strmapi(s, f);
	printf("Input: \"%s\" | Function: %s => Result: \"%s\"\n", s ? s : "NULL", desc, res ? res : "NULL");
	free(res);
}

int	main(void)
{
	test_ft_strmapi("hello world", to_uppercase, "to_uppercase");
	test_ft_strmapi("ABCdef", invert_case, "invert_case");
	test_ft_strmapi("12345", index_offset, "index_offset");
	test_ft_strmapi("", to_uppercase, "to_uppercase on empty");
	test_ft_strmapi(NULL, to_uppercase, "NULL input");
	test_ft_strmapi("text", NULL, "NULL function");
	return (0);
}
