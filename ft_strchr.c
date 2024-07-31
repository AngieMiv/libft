/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:33:05 by anibarro          #+#    #+#             */
/*   Updated: 2024/05/21 17:35:24 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	c1;

	c1 = c;
	i = 0;
	while (s[i] != c1 && s[i] != '\0')
		i++;
	if (s[i] == c1)
		return ((char *)s + i);
	return (NULL);
}
// para buscar la 1a aparicion de un carácter especifico
/*
int	main(void)
{
	char s[] = "caracter especifico";
	printf("%s", strchr(s, 105));
	//printf("%s", ft_strchr(s, 105));

}
*/
