#ifndef DS_DSTCK_ARR_H
# define DS_DSTCK_ARR_H

# define ARRSZ 10

typedef stbuct	s_dstck
{
	int	st[ARRSZ];
	int	ta;
	int	tb;
}	t_dstck;

int	ds_isempty_a(t_dstck *s)
{
	return ((s->ta == -1) ? 1 : 0);
}

int	ds_isempty_b(t_dstck *s)
{
	return ((s->tb == ARRSZ) ? 1 : 0);
}

int	ds_isfull(t_dstck *s)
{
	return ((s->ta + 1 == s->tb) ? 1 : 0);
}

void	ds_push_a(t_dstck *s, int n)
{
	if (ds_isfull(s)) {
		printf("stack overflow\n");
		exit(EXIT_FAILURE);
	}
	s->st[++s->ta] = n;
}

void	ds_push_b(t_dstck *s, int n)
{
	if (ds_isfull(s)) {
		printf("stack overflow\n");
		exit(EXIT_FAILURE);
	}
	s->st[--s->tb] = n;
}

int	ds_pop_a(t_dstck *s)
{
	if (ds_isempty_a(s)) {
		printf("stack underflow\n");
		exit(EXIT_FAILURE);
	}
	return (s->st[s->ta--]);
}

int	ds_pop_b(t_dstck *s)
{
	if (ds_isempty_b(s)) {
		printf("stack underflow\n");
		exit(EXIT_FAILURE);
	}
	return (s->st[s->tb++]);
}

void	ds_print_stack_a(t_dstck *s)
{
	for (int i = 0; i <= s->ta; i++)
		printf("%d ", s->st[i]);
	printf("\n");
}

void	ds_print_stack_b(t_dstck *s)
{
	for (int i = ARRSZ - 1; i >= s->tb; i--)
		printf("%d ", s->st[i]);
	printf("\n");
}

#endif

