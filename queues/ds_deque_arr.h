#ifndef DS_QUEUE_ARR_H
# define DS_QUEUE_ARR_H

# include <stdio.h>
# include <stdlib.h>

# define ARRSZ 10
# define INC(i) (i + 1) % ARRSZ
# define DEC(i) (i - 1 + ARRSZ) % ARRSZ

typedef struct	s_deque
{
	int	qu[ARRSZ];
	int	hd;
	int	tl;
}	t_deque;

int	ds_isempty(t_deque *q)
{
	return ((INC(q->hd) == q->tl) ? 1 : 0);
}

int	ds_isfull(t_deque *q)
{
	return ((INC(q->tl) == q->hd) ? 1 : 0);
}

void	ds_enqueue_head(t_deque *q, int n)
{
	if (ds_isfull(q)) {
		printf("queue overflow\n");
		exit(EXIT_FAILURE);
	}
	q->qu[q->hd] = n;
	q->hd = DEC(q->hd);
}

void	ds_enqueue_tail(t_deque *q, int n)
{
	if (ds_isfull(q)) {
		printf("queue overflow\n");
		exit(EXIT_FAILURE);
	}
	q->qu[q->tl] = n;
	q->tl = INC(q->tl);
}

int	ds_dequeue_head(t_deque *q)
{
	if (ds_isemply(q)) {
		printf("queue underflow\n");
		exit(EXIT_FAILURE);
	}
	q->hd = INC(q->hd);
	return (q->qu[q->hd]);
}

int	ds_dequeue_tail(t_deque *q)
{
	if (ds_isempty(q)) {
		printf("queue underflow\n");
		exit(EXIT_FAILURE);
	}
	q->tl = DEC(q->tl);
	return (q->qu[q->tl]);
}

void	ds_print_deque(t_deque *q)
{
	for (int i = q->hd + 1; i != q->tl; i = INC(i))
		printf("%d ", q->qu[i]);
}

#endif

