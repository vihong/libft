/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 23:41:10 by vi-hong           #+#    #+#             */
/*   Updated: 2016/12/16 23:57:25 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;
	int			res;

	i = 0;
	res = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	res = s1[i] - s2[i];
	if (res == 0)
		return (1);
	else
		return (0);
}
