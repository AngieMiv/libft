/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:55:05 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/22 20:01:09 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 > c2 || (c1 != '\0' && c2 == '\0'))
			return (1);
		if (c2 > c1 || (c2 != '\0' && c1 == '\0'))
			return (-1);
		if (c1 == '\0' && c2 == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char s1[] = "atoms\0\0\0\0";
	const char s2[] = "atoms\0abc";

	printf("%d", (ft_strncmp(s1, s2, 8)));
	return (0);
}
*/
