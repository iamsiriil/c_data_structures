#include <stdio.h>
#include "ds_queue_arr_struct.c"

void	ds_print_array(int *queue, int size)
{
	for (int i = 0; i < size; i++) printf("%d ", queue[i]);
}

int	main(void)
{
	t_queue	q = {{}, ARRSZ / 2, ARRSZ / 2};

	ds_enqueue(&q, 1);
	ds_enqueue(&q, 2);
	ds_enqueue(&q, 3);
	ds_enqueue(&q, 4);
	ds_enqueue(&q, 5);
	ds_enqueue(&q, 6);
	ds_enqueue(&q, 7);
	ds_enqueue(&q, 8);
	ds_enqueue(&q, 9);
	//ds_enqueue(&q, 10);
	//ds_enqueue(&q, 11);
	printf("queue : ");
	ds_print_queue(&q);
	printf("\narray : ");
	ds_print_array(q.qu, ARRSZ);

	ds_dequeue(&q);
	ds_dequeue(&q);
	ds_dequeue(&q);
	ds_dequeue(&q);
	ds_dequeue(&q);
	ds_enqueue(&q, 10);
	ds_enqueue(&q, 11);
	ds_enqueue(&q, 12);
	ds_enqueue(&q, 13);
	ds_enqueue(&q, 14);
	ds_enqueue(&q, 15);
	printf("\nqueue : ");
	ds_print_queue(&q);
	printf("\narray : ");
	ds_print_array(q.qu, ARRSZ);
	printf("\nhead : %d | tail : %d\n", q.hd, q.tl);
	return (0);
}
