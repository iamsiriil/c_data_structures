#ifndef DS_STACK_LST_H
# define DS_STACK_LST_H

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_node
{
	int		dt;
	struct s_node	*nx;
}	t_node;

t_node	*ds_create_node(int dt)
{
	t_node	*n = malloc(sizeof(t_node));
	if (!n)
		return (NULL);
	n->dt = dt;
	n->nx = NULL;
	return (n);
}

void	ds_push(t_node **s, t_node *n)
{
	if (s != NULL)
		n->nx = *s;
	*s = n;
}

t_node	*ds_pop(t_node **s)
{
	if (!*s)
		return (NULL);
	t_node	*tp = *s;
	*s = tp->nx;
	tp->nx = NULL;
	return (tp);
}

void	ds_print_stack(t_node *s)
{
	for (t_node *cr = s; cr != NULL; cr = cr->nx)
		printf("%d ", cr->dt);
	printf("\n");
}

void	ds_free_stack(t_node *s)
{
	for (t_node *cr = s, *nx; cr != NULL; cr = nx) {
		nx = cr->nx;
		free(cr);
	}
}

#endif

