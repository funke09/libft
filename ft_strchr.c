/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:32:32 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/10 16:55:38 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if ((unsigned char)*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if (c == 0)
        return ((char *)s);
    return (0);
}
