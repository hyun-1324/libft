
#include "libft_bonus.h"

void	free_list(t_list *lst)
{
	t_list	*tmp;
	while (lst)
	{
		tmp = lst -> next;
		free(lst);
		lst = tmp;
	}
}

void	test_ft_lstadd_front()
{
	t_list	*head;
	t_list	*node;
	t_list	*new;

	new = ft_lstnew("new");
	node = ft_lstnew("previous");
	head = node;
	ft_lstadd_front(&head, new);
	if (head == new && new->next == node)
		printf("ft_lstadd_front: PASS\n");
	else
		printf("ft_lstadd_front: FAIL\n");
	free_list(new);
}

int	main(void)
{
	test_ft_lstadd_front();
	return (0);
}
