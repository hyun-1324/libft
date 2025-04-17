#include "libft.h"
#include <string.h>

void	to_uppercase(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	index_shift(unsigned int i, char *c)
{
	*c += i;
}

void	invert_case(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	test_ft_striteri(const char *original, void (*f)(unsigned int, char*), const char *desc)
{
	char	*copy;

	if (!original)
		copy = NULL;
	else
		copy = strdup(original);

	ft_striteri(copy, f);

	printf("Original: \"%s\" | Function: %s => Result: \"%s\"\n",
		original ? original : "NULL",
		desc,
		copy ? copy : "NULL");

	free(copy);
}

int	main(void)
{
	test_ft_striteri("hello", to_uppercase, "to_uppercase");
	test_ft_striteri("ABCdef", invert_case, "invert_case");
	test_ft_striteri("abcd", index_shift, "index_shift");
	test_ft_striteri("", to_uppercase, "empty string");
	test_ft_striteri(NULL, to_uppercase, "NULL input");
	test_ft_striteri("test", NULL, "NULL function");
	return (0);
}
