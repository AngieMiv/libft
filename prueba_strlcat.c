/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarro <anibarro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:00:48 by anibarro          #+#    #+#             */
/*   Updated: 2023/12/06 18:21:53 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char		destino[];
	const char	source[];
	size_t		numero;

	destino = "pqrstuvwxyz";
	source = "abcd";
	numero = strlcat(destino, source, 1);
	strlcat(destino, source, 1);
	printf("%lu\n", numero);
	printf("%s", destino);
}
