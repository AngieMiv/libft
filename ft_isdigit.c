/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:20:44 by anibarro          #+#    #+#             */
/*   Updated: 2023/09/14 12:12:02 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("\tft_isdigit \n%d es un digito = 1, %d no es un digito = 0",
	 ft_isdigit('2'), ft_isdigit('b'));
	printf("\n\tisigit \n%d es un digito = 1, %d no es un digito = 0",
	 isdigit('2'), isdigit('b'));
}
*/