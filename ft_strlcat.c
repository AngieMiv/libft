/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:23:27 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/19 20:26:22 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	max_chars_to_append;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	max_chars_to_append = dstsize - dstlen - 1;
	i = 0;
	if (dstsize == 0 || dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && i < max_chars_to_append)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
/*
int	main(void)
{
	char	dst[20] = "foo";
	char	src[] = "bar";
	printf("\nbefore %s", dst);
	printf("\n%lu ft_strlcat", ft_strlcat(dst, src, 10));
	//printf("\n%lu = strlcat ", strlcat(dst, src, 10));
	printf("\n%s = strlcat after", dst);
	printf("\nft_strlcat after %lu\n", ft_strlcat(dst, src, 10));
}
*/
