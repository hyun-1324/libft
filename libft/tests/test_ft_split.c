#include "libft.h"
#include <string.h>

void	print_split_result(char **split)
{
	int	i = 0;

	if (!split)
	{
		printf("Result: NULL\n");
		return ;
	}
	printf("Result: [");
	while (split[i])
	{
		printf("\"%s\"", split[i]);
		if (split[i + 1])
			printf(", ");
		i++;
	}
	printf("]\n");
}

void	test_ft_split(const char *s, char c)
{
	char	**res;

	printf("Input: \"%s\" | Delim: '%c'\n", s ? s : "NULL", c);
	res = ft_split(s, c);
	print_split_result(res);

	if (res)
	{
		int	i = 0;
		while (res[i])
			free(res[i++]);
		free(res);
	}
	printf("--------------------------------------------------\n");
}


int	main(void)
{
	test_ft_split("Hello World This Is 42", ' ');
	test_ft_split("  split  this please  ", ' ');
	test_ft_split("42-Seoul-Is-Awesome", '-');
	test_ft_split(",,,,42,,,Seoul,,", ',');
	test_ft_split("nosplit", ',');
	test_ft_split("", ',');
	test_ft_split(NULL, ' ');
	test_ft_split("abc", '\0');
	test_ft_split("a b c", ' ');
	return (0);
}
