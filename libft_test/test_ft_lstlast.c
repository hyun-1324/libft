
#include "libft.h"

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

void	test_ft_lstlast()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*result_node;
	char	*result;

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	result_node = ft_lstlast(node1);
	if (result_node == node3)
		result = "PASS";
	else
		result = "FAIL";

	printf("ft_lstlast test : %s\n", result);
	free_list(node1);
}

int	main(void)
{
	test_ft_lstlast();
	return (0);
}
