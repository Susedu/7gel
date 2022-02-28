#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	*result;

	if (min >= max)
	{	
		return (0);
	}
	x = max - min;
	result = (int *)malloc(sizeof(int) * (x));
	if (result == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (max > min)
	{
		result[x] = min;
		min++;
		x++;
	}
	return (result);
}
