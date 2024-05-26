/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:21:45 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/24 20:55:14 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*dst1;
	const unsigned char		*src1;

	dst1 = dst;
	src1 = src;
	if (dst1 < src1)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			dst1[i] = src1[i];
			i--;
		}
	}
	return (dst);
}
