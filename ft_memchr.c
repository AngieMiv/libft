/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 01:22:35 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/27 01:22:45 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			c1;
	const unsigned char		*s1;
	size_t					i;

	c1 = c;
	s1 = s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
