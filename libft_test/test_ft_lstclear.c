#include "libft_bonus.h"
#include <string.h>

void	custom_del(void *ptr)
{
	printf("Deleting content: %s\n", (char *)ptr);
	free(ptr);
}

void	test_ft_lstclear(void)
{
	t_list	*head;
	t_list	*node2;
	t_list	*node3;

	head = ft_lstnew(strdup("node1"));
	node2 = ft_lstnew(strdup("node2"));
	node3 = ft_lstnew(strdup("node3"));
	if (!head || !node2 || !node3)
	{
		printf("Memory allocation failed\n");
		return ;
	}
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	ft_lstclear(&head, custom_del);

	if (head == NULL)
		printf("ft_lstclear test: PASS (head is NULL)\n");
	else
		printf("ft_lstclear test: FAIL (head not NULL)\n");
}

int	main(void)
{
	test_ft_lstclear();
	return (0);
}
