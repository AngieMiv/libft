/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:19:55 by anibarro          #+#    #+#             */
/*   Updated: 2023/09/19 16:09:44 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("ft_isprint %d = 0, %d = 1",
		ft_isprint(31), ft_isprint(126));
	printf("\nisprint %d = 0, %d = 1",
		isprint(31), isprint(126));
}
*/
