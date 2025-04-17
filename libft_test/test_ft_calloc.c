# include "../libft/libft.h"
#include <string.h>
#include <stdint.h>

void	test_ft_calloc(size_t count, size_t size)
{
	void	*ft_ptr = ft_calloc(count, size);
	void	*lib_ptr = calloc(count, size);
	char	*result;

	if (!ft_ptr || !lib_ptr)
		result = (ft_ptr == lib_ptr) ? "PASS" : "FAIL";
	else if (memcmp(ft_ptr, lib_ptr, count * size) == 0)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_calloc(%zu, %zu) => %s\n", count, size, result);
	free(ft_ptr);
	free(lib_ptr);
}

int	main(void)
{
	test_ft_calloc(5, sizeof(int));
	test_ft_calloc(10, sizeof(char));
	test_ft_calloc(0, sizeof(int));
	test_ft_calloc(1, 0);
	test_ft_calloc(1000, 1000);
	test_ft_calloc(SIZE_MAX, 2);
	return (0);
}
