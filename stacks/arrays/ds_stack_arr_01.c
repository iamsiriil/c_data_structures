#include <stdio.h>
#include <stdlib.h>

int	ds_isfull(int top, int size)
{
	return ((top == (size - 1)) ? 1 : 0);
}

int	ds_isempty(int top)
{
	return ((top == -1) ? 1 : 0);
}

void	ds_push(int *stack, int nbr, int *top, int size)
{
	if (ds_isfull(*top, size))
		return ;
	*top += 1;
	stack[*top] = nbr;
}

int	ds_pop(int *stack, int *top)
{
	if (ds_isempty(*top))
		exit(1);
	int	nbr = stack[*top];
	stack[*top] = 0;
	*top -= 1;
	return (nbr);
}

void	ds_print_stack(int *stack, int top)
{
	for (int i = 0; i <= top; i++)
		printf("stack[%d] : %d\n", i, stack[i]);
}

int	main(void)
{
	int	size = 10;
	int	stack[size], top = -1;

	{
		ds_push(stack, 45, &top, size);
		ds_push(stack, 56, &top, size);
		ds_push(stack, 13, &top, size);
		ds_push(stack, 61, &top, size);
		ds_push(stack, 78, &top, size);
		ds_push(stack, 19, &top, size);
	
		ds_print_stack(stack, top);

	}
	printf("\n");
	{
		printf("pop : %d\n", ds_pop(stack, &top));
		printf("pop : %d\n", ds_pop(stack, &top));
		printf("pop : %d\n", ds_pop(stack, &top));
		printf("pop : %d\n", ds_pop(stack, &top));
		printf("\n");
		printf("top : %d\n", top);

		ds_print_stack(stack, top);
	}
	return (0);
}
