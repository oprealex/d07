
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_strlen_total(int argc, char **argv)
{
	int count;
	int i;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count = count + ft_strlen(argv[i]);
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		total;
	int		i_arg;
	int		j;
	int		i_total;

	total = ft_strlen_total(argc, argv) + argc;
	result = (char*)malloc(sizeof(*result) * total);
	i_total = 0;
	i_arg = 1;
	while (i_arg < argc)
	{
		j = 0;
		while (argv[i_arg][j] != '\0')
		{
			result[i_total] = argv[i_arg][j];
			j++;
			i_total++;
		}
		result[i_total] = '\n';
		i_arg++;
		i_total++;
	}
	result[i_total - 1] = '\0';
	return (result);
}
