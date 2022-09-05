/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:57:07 by abasante          #+#    #+#             */
/*   Updated: 2022/09/01 15:31:15 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while(len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return(b);
}

/*int main()
{
	char str[50] = "This string.h library function";
	printf("%s", ft_memset(str, '$', 30));
	return(0);
}
*/
