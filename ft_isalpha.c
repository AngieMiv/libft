/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:06:12 by anibarro          #+#    #+#             */
/*   Updated: 2023/09/14 12:11:37 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalpha(unsigned char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("\tft_isalpha \n%d es una letra = 1, %d no es una letra = 0", ft_isalpha('a'), ft_isalpha('1'));
	printf("\n\tisalpha \n%d es una letra = 1, %d no es una letra = 0", isalpha('a'), isalpha('1'));
}
*/