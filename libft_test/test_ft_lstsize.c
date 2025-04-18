
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

void	test_ft_lstsize()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		len;
	char	*result;

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	len = ft_lstsize(node1);
	if (len == 3)
		result = "PASS";
	else
		result = "FAIL";

	printf("ft_lstsize test (3 nodes): %s (got %d)\n", result, len);
	free_list(node1);
}

int	main(void)
{
	test_ft_lstsize();
	return (0);
}
