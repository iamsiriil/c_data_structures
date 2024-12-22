#include <stdlib.h>
#include <stdio.h>

typedef struct	s_llist
{
	struct s_llist	*next;
	void		*data;
}	t_llist;

t_llist	*llist_create_node(void *data)
{
	t_llist	*new_node;

	new_node = (t_llist *)malloc(sizeof(t_llist));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->data = data;

	return (new_node);
}

void	llist_add_front(t_llist **list, t_llist *node)
{
	node->next = *list;
	*list = node;
}

void	llist_add_back(t_llist *list, t_llist *node)
{
	t_llist	*curr = list;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = node;
}

int	llist_get_size(t_llist *list)
{
	int	i = 0;
	t_llist *curr = list;

	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

void	llist_print_list(t_llist *list)
{
	t_llist *curr = list;

	while (curr != NULL)
	{
		printf("%d\n", *(int *)curr->data);
		curr = curr->next;
	}
}

int	main(void)
{
	int	num0 = 0;
	int	num1 = 1;
	int	num2 = 2;
	int	num3 = 3;
	
	int	num4 = -1;
	int	num5 = -2;
	int	num6 = -3;

	t_llist	*llist = llist_create_node(&num0);
	llist_add_front(&llist, llist_create_node(&num1));
	llist_add_front(&llist, llist_create_node(&num2));
	llist_add_front(&llist, llist_create_node(&num3));
	llist_print_list(llist);
	int size = llist_get_size(llist);
	printf("The size is: %d\n", size);

	llist_add_back(llist, llist_create_node(&num4));
	llist_add_back(llist, llist_create_node(&num5));
	llist_add_back(llist, llist_create_node(&num6));
	llist_print_list(llist);
	size = llist_get_size(llist);
	printf("The size is: %d\n", size);

	free(llist);
	return (0);
}
