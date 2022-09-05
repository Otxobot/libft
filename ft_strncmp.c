/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:18:14 by abasante          #+#    #+#             */
/*   Updated: 2022/09/05 16:00:22 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
    
    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    if (i != n)
        return(s1[i] - s2[i]);
    return(0);
}

/*
int main(void)
{
  	char str1[] = "aaaa";
	char str2[] = "aaa";
	//	unsigned int nb = 2;

	printf("ft_strncmp: %d ", ft_strncmp(str1, str2, 7));
//	printf("src: %s ", str1);
//	printf("Search: %s ",  str2);
	return (0);
}
*/