/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:58:08 by abasante          #+#    #+#             */
/*   Updated: 2022/09/08 12:22:19 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (dst[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < dstsize)
	{
		dst[a + b] = src[b];
		b++;
	}
	return(0);
}

/*
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello!";
	char		dst1[42] = "Anne ";
	char		dst2[42] = "Anne ";
	char		dst3[42] = "Anne ";
	char		dst4[42] = "Anne ";
	char		dst5[42] = "MarVin Bot 42 ";
	char		dst6[42] = "MarVin Bot 42 ";
	char		dst7[42] = "Mar";
	char		dst8[42] = "Mar";
	int			ret1;
	int			ret2;

	ret1 = (int)strlcat(dst1, str, 12);
	printf("str_lib >> %d \n", ret1);
	printf("str_lib >> %s \n", dst1);
	ret2 = (int)ft_strlcat(dst2, str, 12);
	printf("str_ft >> %d \n", ret2);
	printf("str_lib >> %s \n", dst2);

	printf("================\n");
	

	return (0);
}
*/