#include "libft.h"
#include <string.h>

void	custom_del(void *ptr)
{
	printf("custom_del called for content: %s\n", (char *)ptr);
	free(ptr);
}

void	test_ft_lstdelone(void)
{
	t_list	*node;
	char	*content;

	content = strdup("Hello");
	node = ft_lstnew(content);
	if (!node || !content)
	{
		printf("Memory allocation failed\n");
		return ;
	}
	ft_lstdelone(node, custom_del);
	printf("ft_lstdelone test: PASS (no crash)\n");
}

int	main(void)
{
	test_ft_lstdelone();
	return (0);
}
