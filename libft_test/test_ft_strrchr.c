
#include "libft.h"
#include <string.h>

void    test_ft_strrchr(const char *s, int c)
{
    char    *ft_res;
    char    *lib_res;
    char    *result;

    ft_res = ft_strrchr(s, c);
    lib_res = strrchr(s, c);
    if ((ft_res && lib_res && strcmp(ft_res, lib_res) == 0) || (ft_res == lib_res))
        result = "PASS";
    else
        result = "FAIL";
    printf("ft_strrchr(\"%s\", '%c') => %s\n", s, c, result);
}

int main(void)
{
    test_ft_strrchr("hello world", 'o');
    test_ft_strrchr("abcdef", 'x');
    return (0);
}
