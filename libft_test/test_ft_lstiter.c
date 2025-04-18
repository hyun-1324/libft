
#include "libft_bonus.h"

void	custom_iter(void *content)
{
	printf("Visiting node content: %s\n", (char *)content);
}

void	free_list(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

void	test_ft_lstiter()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstiter(node1, custom_iter);
	free_list(node1);
}

int	main(void)
{
	test_ft_lstiter();
	return (0);
}
