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

	printf("&stack  : %p\n", &stack);
	printf("stack   : %p\n", stack);

	for (int i = 5; i > 0; i--) {
		t_node	*pop = ds_pop(&stack);
		printf("node #%d : %p | val : %d | ", i, pop, pop->dt);
		printf("&dt : %p/%ld | &nx : %p/%ld\n", &pop->dt, sizeof(pop->dt), &pop->nx, sizeof(pop->nx));
		free(pop);
	}

	ds_print_stack(stack);

	ds_push(&stack, ds_create_node(1));
	ds_push(&stack, ds_create_node(2));
	ds_push(&stack, ds_create_node(3));
	ds_push(&stack, ds_create_node(4));

	ds_print_stack(stack);

	ds_free_stack(stack);

	return (0);
}
