
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*result;
	int		length;

	length = 0;
	result = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		result[length] = min;
		min++;
		length++;
	}
	*range = result;
	return (length);
}
