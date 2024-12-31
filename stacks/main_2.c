#include "ds_stack_lst.h"

int	main(void)
{
	t_node	*stack = NULL;

	ds_push(&stack, ds_create_node(1));
	ds_push(&stack, ds_create_node(2));
	ds_push(&stack, ds_create_node(3));
	ds_push(&stack, ds_create_node(4));
	ds_push(&stack, ds_create_node(5));

	ds_print_stack(stack);

	t_node	*pop = ds_pop(&stack);
	printf("pop : %d\n", pop->dt);
	free(pop);

	ds_print_stack(stack);

	ds_free_stack(stack);
	return (0);
}
