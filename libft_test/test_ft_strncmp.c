
#include "libft.h"
#include <string.h>

void    test_ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int     ft_res;
    int     lib_res;
    char    *result;

    ft_res = ft_strncmp(s1, s2, n);
    lib_res = strncmp(s1, s2, n);
    if (ft_res == lib_res)
        result = "PASS";
    else
        result = "FAIL";
    printf("ft_strncmp(\"%s\", \"%s\", %zu) => %s\n", s1, s2, n, result);
}

int main(void)
{
    test_ft_strncmp("abc", "abc", 3);
    test_ft_strncmp("abc", "abd", 2);
    test_ft_strncmp("abc", "abd", 3);
    return (0);
}
