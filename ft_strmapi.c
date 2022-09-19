/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:54:33 by abasante          #+#    #+#             */
/*   Updated: 2022/09/19 16:38:43 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == 0)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	mi_funcion(unsigned int i, char str)
// {
// 	i = 32;
// 	return(str - i);
// }
// int main(void)
// {
// 	char	*str;
// 	char	*resultado;
// 	str = "?hola?guapa.?";
// 	printf("el resultado es: %s\n", str);
// 	resultado = ft_strmapi(str, mi_funcion);
// 	printf("el resultado nuevo es: %s\n", resultado);
// 	return(0);
// }
