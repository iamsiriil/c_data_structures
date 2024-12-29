#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRSZ 10
#define INC(i) (i + 1) % ARRSZ

typedef struct	s_queue
{
	int	qu[ARRSZ];
	int	hd;
	int	tl;
}	t_queue;

int	ds_isempty(t_queue *q)
{
	return ((q->hd == q->tl) ? 1 : 0);
}

int	ds_isfull(t_queue *q)
{
	return ((INC(q->tl) == q->hd) ? 1 : 0);
}

void	ds_enqueue(t_queue *q, int n)
{
	if (ds_isfull(q)) {
	       printf("queue overflow\n");
	       exit(EXIT_FAILURE);
	}
	q->qu[q->tl] = n;
	q->tl = INC(q->tl);
}

int	ds_dequeue(t_queue *q)
{
	if (ds_isempty(q)) {
	       printf("queue underflow\n");
	       exit(EXIT_FAILURE);
	}
	int	n = q->qu[q->hd];
	q->hd = INC(q->hd);
	return (n);
}

void	ds_print_queue(t_queue *q)
{
	for (int i = q->hd; i != q->tl; i = INC(i))
		printf("%d ", q->qu[i]);
}

