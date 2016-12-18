/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 01:09:28 by vi-hong           #+#    #+#             */
/*   Updated: 2016/12/15 01:09:45 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	int i;

	i = -1;
	while (s[++i])
		write(1, (s + i), 1);
	write(1, "\n", 1);
}