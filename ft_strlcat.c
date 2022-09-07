/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcatt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:58:08 by abasante          #+#    #+#             */
/*   Updated: 2022/09/07 13:58:10 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *  dest, const char *  src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < dstsize)
	{
		dest[a + b] = src[b];
		b++;
	}
	return(0);
}
