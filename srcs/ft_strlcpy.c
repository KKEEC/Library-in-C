/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:21 by kkc               #+#    #+#             */
/*   Updated: 2024/11/20 09:57:00 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/libftprintf.h"

size_t	ft_strlcpy(char *to, const char *from, size_t size)
{
	size_t	j;
	size_t	lenfrom;

	lenfrom = ft_strlen(from);
	if (size == 0)
		return (lenfrom);
	j = 0;
	if (size > 0)
	{
		while (j < size - 1 && from[j] != '\0')
		{
			to[j] = from[j];
			j++;
		}
	}
	to[j] = '\0';
	return (lenfrom);
}
