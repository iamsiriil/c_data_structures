#include "ds_dstck_arr.h"

int	main(void)
{
	t_dstck	stack = {{}, -1, ARRSZ};

	ds_push_b(&stack, 1), printf("push b : 1 | top : %d\n", stack.tb);
	ds_push_b(&stack, 2), printf("push b : 2 | top : %d\n", stack.tb);
	ds_push_b(&stack, 3), printf("push b : 3 | top : %d\n", stack.tb);
	ds_push_b(&stack, 4), printf("push b : 4 | top : %d\n", stack.tb);
	ds_push_b(&stack, 5), printf("push b : 5 | top : %d\n", stack.tb);

	ds_push_a(&stack, -1), printf("push a : -1 | top : %d\n", stack.ta);
	ds_push_a(&stack, -2), printf("push a : -2 | top : %d\n", stack.ta);
	ds_push_a(&stack, -3), printf("push a : -3 | top : %d\n", stack.ta);

	printf("pop b : %2d | top : %d\n", ds_pop_b(&stack), stack.tb);
	printf("pop b : %2d | top : %d\n", ds_pop_b(&stack), stack.tb);
	printf("pop b : %2d | top : %d\n", ds_pop_b(&stack), stack.tb);

	printf("\nstack b : ");
	ds_print_stack_b(&stack);
	printf("\n");

	printf("\n");
	printf("\nstack a : ");
	ds_print_stack_a(&stack);
	printf("\n");

	printf("top a : %d\n", stack.ta);
	return (0);
}
