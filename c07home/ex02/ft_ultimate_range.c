#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	x = max - min;
	result = malloc(sizeof(int) * (x));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	x = 0;
	while (max > min)
	{
		result[x] = min;
		min++;
		x++;
	}
	return (x);
}
