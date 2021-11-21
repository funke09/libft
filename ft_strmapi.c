/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 04:15:34 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/17 11:08:14 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// char zineb(unsigned int index, char c)
// {
//     if ((c >='a' && c <= 'z') || (c >= 'A' && c <= 'z'))
//         {
//             c += index;
//         }
//         return (c);
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *p;
    int i;

    i = 0;
    p = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!p || !s)
        return (NULL);
    while (s[i])
    {
        p[i] = f(i, s[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}
// int main()
// {
//     char s[] = "hello";
//     char (*f)(unsigned int, char);
    
//     f = &zineb;
//     printf("%s", ft_strmapi(s, f));
//     return(0);
// }
