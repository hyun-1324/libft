#include "libft.h"
#include <string.h>

void    test_ft_memcpy(void)
{
    char src[] = "123456789";
    char dst1[10];
    char dst2[10];
    char *result;

    ft_memcpy(dst1, src, 6);
    memcpy(dst2, src, 6);
    if (memcmp(dst1, dst2, 6) == 0)
        result = "PASS";
    else
        result = "FAIL";
    printf("ft_memcpy test => %s\n", result);
}


int main(void)
{
    test_ft_memcpy();
    return (0);
}
