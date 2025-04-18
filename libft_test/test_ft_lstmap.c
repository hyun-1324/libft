
#include "libft_bonus.h"
#include <string.h>

void	*customf(void *content)
{
	char	*result;
	char	*charcontent;

	charcontent = (char *)content;
	result = malloc(2);
	if (!result)
		return (NULL);
	result[0] = *charcontent + ('a' - 'A');
	result[1] = '\0';
	return (result);
}

void	custom_del(void *ptr)
{
	printf("custom_del called for content: %s\n", (char *)ptr);
	free(ptr);
}

void	test_ft_lstmap()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;

	node1 = ft_lstnew(strdup("A"));
	node2 = ft_lstnew(strdup("B"));
	node3 = ft_lstnew(strdup("C"));
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	new_list = ft_lstmap(node1, customf, custom_del);
	if (strcmp((char *)new_list->content, "a") == 0 &&
		strcmp((char *)new_list->next->content, "b") == 0 &&
		strcmp((char *)new_list->next->next->content, "c") == 0)
		printf("ft_lstmap test: PASS\n");
	else
	printf("Expected: abc | Got: %s%s%s\n",
		(char *)new_list->content,
		(char *)new_list->next->content,
		(char *)new_list->next->next->content);
	ft_lstclear(&node1, free);
	ft_lstclear(&new_list, free);

}

int	main(void)
{
	test_ft_lstmap();
	return (0);
}
