/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:52:18 by abasante          #+#    #+#             */
/*   Updated: 2022/08/31 13:40:35 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < dstsize)
	{
		dest[a + b] = src[b];
		b++;
	}
}
