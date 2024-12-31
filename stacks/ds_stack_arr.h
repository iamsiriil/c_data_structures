#ifndef DS_STACK_ARR_H
# define DS_STACK_ARR_H

# include <stdio.h>
# include <stdlib.h>

# define ARRSZ 10

typedef struct	s_stack
{
	int	st[ARRSZ];
	int	tp;
}	t_stack;

int	ds_isfull(t_stack *s)
{
	return ((s->tp == ARRSZ - 1) ? 1 : 0);
}

int	ds_isempty(t_stack *s)
{
	return ((s->tp == -1) ? 1 : 0);
}

void	ds_push(t_stack *s, int n)
{
	if (ds_isfull(s)) {
		printf("stack overflow\n");
		exit(EXIT_FAILURE);
	}
	s->st[++s->tp] = n;
}

int	ds_pop(t_stack *s)
{
	if (ds_isempty(s)) {
		printf("stack underflow\n");
		exit(EXIT_FAILURE);
	}
	return (s->st[s->tp--]);
}

void	ds_print_stack(t_stack *s)
{
	for (int i = 0; i <= s->tp; i++)
		printf("%d ", s->st[i]);
	printf("\n");
}

#endif

