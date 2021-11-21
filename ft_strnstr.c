/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:21:17 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/15 18:20:01 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t size;

    i = 0;
    size = ft_strlen(needle);
    if (!size)
        return ((char *)haystack);
    while ( haystack[i] && i < len)
    {
        if(!(ft_strncmp(haystack + i, needle, size)))
            return ((char *)haystack + i);
        i++;
    }
    return (0);
}

// int main()
// {
//     char string[] = "zineb m9weda";
//     char n[] = "m9w";
//     printf("%s\n", ft_strnstr(string, n, 5));
//     printf("%s\n", strnstr(string, n, 5));
// }
