/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:57:54 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/24 18:16:21 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		c1;
	char				*b1;

	c1 = c;
	b1 = b;
	i = 0;
	while (i < len)
	{
		b1[i] = c1;
		i++;
	}
	return (b);
}
