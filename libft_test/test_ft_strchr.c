
#include "libft.h"
#include <string.h>


void    test_ft_strchr(const char *s, int c)
{
	char    *ft_res;
	char    *lib_res;
	char    *result;

	ft_res = ft_strchr(s, c);
	lib_res = strchr(s, c);
	if ((ft_res && lib_res && strcmp(ft_res, lib_res) == 0) || (ft_res == lib_res))
	    result = "PASS";
	else
	    result = "FAIL";
	printf("ft_strchr(\"%s\", '%c') => %s\n", s, c, result);
}


int main(void)
{
    test_ft_strchr("hello world", 'o');
    test_ft_strchr("abcdef", 'x');
    return (0);
}
