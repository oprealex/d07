/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spurice <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:34:13 by spurice           #+#    #+#             */
/*   Updated: 2017/08/23 18:34:14 by spurice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int nb;

	nb = 0;
	while (str[nb] != '\0')
		nb++;
	return (nb);
}

char	*ft_strdup(char *src)
{
	char	*src_copy;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(src);
	src_copy = (char*)malloc(sizeof(*src_copy) * (length + 1));
	while (i < length)
	{
		src_copy[i] = src[i];
		i++;
	}
	src_copy[i] = '\0';
	return (src_copy);
}
