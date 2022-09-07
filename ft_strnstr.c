/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:39:05 by abasante          #+#    #+#             */
/*   Updated: 2022/09/07 17:25:15 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while(haystack [i + j] == needle[j] && (i + j) > len)
		{
			if (haystack[i + j] == needle[j] && (i + j) < len)
				return((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return(NULL);
}
