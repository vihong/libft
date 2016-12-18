/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:31:03 by vi-hong           #+#    #+#             */
/*   Updated: 2016/12/16 12:22:35 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	*ptr;
	size_t	i;

	i = 0;
	ptr = (size_t*)malloc(sizeof(size_t) * size);
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
