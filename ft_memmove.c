/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:03:45 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/21 02:39:42 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  k;

    j = ft_strlen((char *)dest);
    k = 0;
    if ((!dest || !src )|| len == 0)
        return (dest);
    if (dest <= src)
    {
        i = 0;
        if (len <= j)
        {
        	while (i < len)
        	{
        	    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        	    i++;
        	}
        }
        else
        {
          i = j- (int)len;
          while (len)
          {
            ((unsigned char *)dest)[j] = ((unsigned char *)src)[j];
            j--;
            len--;
          }
        }
    }
    else
    {
        while (len > 0)
        {
            ((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len - 1];
            len--;
        }
    }
   ft_memcpy(dest, src, len);
    return (dest);
}

/*int main()
{
    char d[] = "zineb";
    char s[] = "funke";
	    char s[] = "abcdefghijklmnopqrstuvwyz";
    char d[] = "1234567890123456";
    printf("%s", ft_memmove(d, s, 17));
	ft_memmove(d, s, 17);
	printf("%s", d);
     write(1, &d, 16);
	return (0);
	}*/
