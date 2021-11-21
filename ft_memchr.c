/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:30:18 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/14 16:09:31 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *p;

    i = 0;
    p = (unsigned char *)s;
    while (i < n)
    {
        if (p[i]  == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    if (c == 0)
        return ((void *)s + i);
    return (0);
}
