#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **arry, i;

	arry = (int **)malloc(height * sizeof(int *));
	if (arry == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arry[i] = (int *)malloc(width * sizeof(int));
		if (arry[i] == NULL)
	}

}
