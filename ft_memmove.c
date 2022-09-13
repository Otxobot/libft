/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:06:52 by abasante          #+#    #+#             */
/*   Updated: 2022/09/13 12:16:32 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char		*s;
	char		*d;
	size_t		i;

s = (char *)src;
d = (char *)dst;
i = 0;
	if (!dst && !src)
		return (0);
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int     main(void)
{
	char dst1[] = "Hey marvin!!";
	char dst2[] = "Hey marvin!!";
	char dst3[] = "Hey marvin!!";
	char dst4[] = "Hey marvin!!";
	const char src[] = "Ola";
	const char src2[] = "Ola MarVin Yeh!";
	const char src3[] = "@@@";

	memmove(dst1, src, 1);
	printf("dst1 >> %s \n", dst1);
	ft_memmove(dst2, src, 3);
	printf("dst2 >> %s \n", dst2);

	printf("================\n");

	memmove(dst3, src2, 10);
	printf("dst3 >> %s \n", dst3);
	ft_memmove(dst4, src2, 10);
	printf("dst4 >> %s \n", dst4);

	printf("================\n");

	memmove(dst1, src3, 0);
	printf("dst1 >> %s \n", dst1);
	ft_memmove(dst2, src3, 0);
	printf("dst2 >> %s \n", dst2);

	return (0);
}
*/
