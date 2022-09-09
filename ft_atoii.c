/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:25:46 by abasante          #+#    #+#             */
/*   Updated: 2022/09/09 13:25:50 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
