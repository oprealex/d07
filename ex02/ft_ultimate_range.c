/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spurice <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:33:31 by spurice           #+#    #+#             */
/*   Updated: 2017/08/23 18:33:32 by spurice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
