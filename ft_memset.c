/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:57:07 by abasante          #+#    #+#             */
/*   Updated: 2022/09/07 13:44:43 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while(i < len)
	{
		str[i] = c;
		i++;
	}
	return(b);
}

/*
int main(void)
{
	char str[50] = "This string.h library function";
	
	printf("%s", ft_memset(str, '$', 1));
	
	return(0);
}
*/