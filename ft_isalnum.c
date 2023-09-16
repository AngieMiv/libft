/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:05:09 by anibarro          #+#    #+#             */
/*   Updated: 2023/09/14 12:17:05 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalnum(unsigned char c)
{
	if ((ft_isalpha(c) != 0 && ft_isdigit(c) != 0))
		return (1);
	return (0);
}