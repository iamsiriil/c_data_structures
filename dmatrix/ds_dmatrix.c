#include <stdio.h>
#include <stdlib.h>

int	**ds_create_matrix(int rows, int cols)
{
	int	**matrix = (int **)malloc(sizeof(int **) * rows);
	if (!matrix)
		return (NULL);
	for (int i = 0; i < rows; i++)
		matrix[i] = (int *)malloc(sizeof(int *) * cols);
	return (matrix);
}

void	ds_fill_matrix(int **matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			matrix[i][j] = 0;
	}
}

void	ds_print_matrix(int **matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", matrix[i][j]);
			if (j == cols - 1)
				printf("\n");
		}
	}
}

void	ds_free_matrix(int **matrix, int rows)
{
	for (int i = 0; i < rows; i++)
		free(matrix[i]);
	free(matrix);
}

int	main(void)
{
	int	size = 9;
	int	x = size, y = size;
	int	**matrix = ds_create_matrix(x, y);
	ds_fill_matrix(matrix, x, y);
	ds_print_matrix(matrix, x, y);
	ds_free_matrix(matrix, size);
	return (0);
}
