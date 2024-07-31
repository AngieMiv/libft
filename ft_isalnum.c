/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:05:09 by anibarro          #+#    #+#             */
/*   Updated: 2023/09/14 12:34:33 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1 || ft_isdigit(c) == 1))
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("\tft_isalnum \n%d = 1, %d es = 0", ft_isalnum('a'), ft_isalnum('?'));
	printf("\n\tisalnum \n%d = 1, %d es = 0", isalnum('a'), isalnum('?'));
}
//devuelve 0 si el caracter es false, y un non-zero si es true
*/
