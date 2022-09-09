/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:50:09 by abasante          #+#    #+#             */
/*   Updated: 2022/09/09 11:25:39 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *str;
    size_t          i;

    i = 0;
    str = (unsigned char *)s;
    while(i < n)
    {
        if (str[i] == (unsigned char) c)
            return(str + i);
        i++; 
    }
    return(NULL);
}

/*
int main(void)
{
    char s[50] = "This is my string";

    int a;

    a = 'i';

    printf("%s", ft_memchr(s, a, 30));

    return(0);
}
*/