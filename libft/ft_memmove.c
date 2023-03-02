/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbartos <vbartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:13:39 by vbartos           #+#    #+#             */
/*   Updated: 2023/02/03 14:55:16 by vbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned int	i;
	char			*cdest;
	char			*csrc;

	i = 0;
	if (!dest && !src)
	{
		return (dest);
	}
	cdest = (char *)dest;
	csrc = (char *)src;
	if (cdest > csrc)
	{
		while (n-- > 0)
		{
			cdest[n] = csrc[n];
		}
	}
	else
		ft_memcpy(cdest, csrc, n);
	return (dest);
}
