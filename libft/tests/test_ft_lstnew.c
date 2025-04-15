#include "libft.h"
#include <string.h>

void	test_ft_lstnew(void *content, const char *desc)
{
	t_list	*node;

	node = ft_lstnew(content);
	printf("Test: %s\n", desc);

	if (!node)
	{
		printf("Result: NULL (allocation failed)\n\n");
		return ;
	}

	printf("Node->content: %s\n", node->content ? (char *)node->content : "NULL");
	printf("Node->next: %s\n\n", node->next == NULL ? "NULL" : "Not NULL");

	free(node);
}

int	main(void)
{
	char	*str1 = strdup("Hello");
	char	*str2 = strdup("");
	char	*str3 = NULL;

	test_ft_lstnew(str1, "Normal string content");
	test_ft_lstnew(str2, "Empty string content");
	test_ft_lstnew(str3, "NULL content");

	free(str1);
	free(str2);
	return (0);
}
