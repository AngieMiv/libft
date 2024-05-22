/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:33:05 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/22 18:40:21 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	c1;

	c1 = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c1)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// para buscar la 1a aparicion de un carácter especifico Reverse
/*
int	main(void)
{
	char s[30] = "caracter especifico";
	//printf("%s", strrchr(s, 105));
	printf("%s", ft_strrchr(s, 105));

}
*/
