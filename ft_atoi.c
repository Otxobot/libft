/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:37:29 by abasante          #+#    #+#             */
/*   Updated: 2022/09/08 11:35:05 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int counter1;
	int counter2;
	int final;

	counter1 = 0;
	counter2 = 1;
	final = 0;
	while ((str[counter1] >= '\t' && str[counter1] <= '\r')
		|| str[counter1] == ' ')
		counter1++;
	while (str[counter1] == '+' || str[counter1] == '-')
	{
		if(str[counter1] == '-')
		{
			counter2 *= -1;
			counter1++;
		}		
	}
	while(str[counter1] >= '0' && str[counter1] <= '9')
	{
		final = (str[counter1] - '0') + (final * 10);
		counter1++;
	}
	return(final * counter2);
}
