#include "libft.h"
#include <string.h>

void	test_ft_memmove_basic(void)
{
	char src[] = "abcdefg";
	char dst1[10];
	char dst2[10];
	char *result;

	ft_memmove(dst1, src, 5);
	memmove(dst2, src, 5);
	if (memcmp(dst1, dst2, 5) == 0)
		result = "PASS";
    else
		result = "FAIL";
	printf("ft_memmove basic test => %s\n", result);
}

void	test_ft_memmove_overlap_forward(void)
{
	char buffer1[] = "123456789";
	char buffer2[] = "123456789";
	char *result;

	ft_memmove(buffer1 + 3, buffer1 + 1, 5);
	memmove(buffer2 + 3, buffer2 + 1, 5);
	printf("ft: %s orginal: %s\n", buffer1, buffer2);
	if (memcmp(buffer1, buffer2, 9) == 0)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_memmove overlap forward test => %s\n", result);
}

void    test_ft_memmove_overlap_backward(void)
{
	char buffer1[] = "123456789";
	char buffer2[] = "123456789";
	char *result;

	ft_memmove(buffer1, buffer1 + 2, 5);
	memmove(buffer2, buffer2 + 2, 5);
	if (memcmp(buffer1, buffer2, 9) == 0)
		result = "PASS";
	else
		result = "FAIL";
	printf("ft_memmove overlap backward test => %s\n", result);
}

int main(void)
{
	test_ft_memmove_basic();
	test_ft_memmove_overlap_forward();
	test_ft_memmove_overlap_backward();
	return (0);
}
