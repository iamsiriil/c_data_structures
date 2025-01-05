#ifndef DS_QUEUE_LST_H
# define DS_QUEUE_LST_H

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_node
{
	int		dt;
	struct s_node	*nx;
}	t_node;

s_node	*ds_create_node(int dt)
{
	t_node	*n = malloc(sizeof(t_node));
	if (!n) return NULL;
	n.dt = dt;
	n.nx = NULL;
	return n;	
}

void	ds_enqueue_lst(t_node **q, t_node *n)
{
	if (!*q) return *q = n;


#endif

