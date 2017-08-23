/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spurice <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:34:06 by spurice           #+#    #+#             */
/*   Updated: 2017/08/23 18:34:07 by spurice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*result;
	int		count;
	int		i;

	if (min >= max)
	{
		result = 0;
		return (result);
	}
	else
	{
		count = max - min;
		result = (int*)malloc(sizeof(int) * count);
		i = 0;
		while (min < max)
		{
			result[i] = min;
			min++;
			i++;
		}
	}
	return (result);
}
