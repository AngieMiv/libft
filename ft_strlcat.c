/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:23:27 by anibarro          #+#    #+#             */
/*   Updated: 2023/09/21 14:42:30 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;
	if (dstsize != 0 && (dstlen + srclen) < dstsize)
	{
		while (src[i] != '\0')
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dstlen + srclen);
}
/*
int	main(void)
{
	char dst[] = "hola ";
	const char src[] = "que tal";

	printf("%lu", ft_strlcat(dst, src, 6));
	printf("\n%lu", strlcat(dst, src, 6)); 	
}*/
