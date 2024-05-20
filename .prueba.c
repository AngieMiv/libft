/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:00:48 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/15 10:42:42 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	prueba_ft_strlcat(void)
{
	char	dst01[20] = "foobar";
	char 	*src01 = "bar";
	size_t	dstsize = 3;
	/*printf("%lu", ft_strlcat("pqrstuvwxyz", "abcd", 1));*/
	printf("before %s\n", dst01);
	printf("%lu\n", ft_strlcat(&dst01, src01, dstsize));
	printf("after %s\n", dst01);
}

int	main(void)
{
	prueba_ft_strlcat();
}
