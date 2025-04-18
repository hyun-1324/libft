
#include "libft.h"
#include <string.h>

void	test_strlen(const char *input)
{
	size_t std_len = strlen(input);
	size_t ft_len = ft_strlen(input);
	printf("Input: \"%s\"\n", input);
	printf("Expected: %zu, Got: %zu => %s\n", std_len, ft_len, (std_len == ft_len) ? "PASS" : "FAIL");
}

int	main(void)
{
	test_strlen("Hello World");
	test_strlen("");
	test_strlen("     ");
	test_strlen("42Hive\n\t");
	printf("strlen output: %lu\n",strlen(NULL));
	return(0);
}
