
#include "libft_bonus.h"

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

void	test_ft_lstadd_back()
{
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	if (!node1 || !node2)
	{
		printf("Memory allocation failed\n");
		free_list(node1);
		free_list(node2);
		return ;
	}
	ft_lstadd_back(&node1, node2);
	if (node1->next == node2)
		printf("ft_lstadd_back: PASS\n");
	else
		printf("ft_lstadd_back: FAIL\n");
	free_list(node1);
}

int	main(void)
{
	test_ft_lstadd_back();
	return (0);
}
