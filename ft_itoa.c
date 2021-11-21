/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:49:38 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/18 15:19:53 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_size(int n)
{
	int	len;
	
	len = 0;
	if (n < 0)
		len += 1;
	while (n)
    {
		n = n / 10;
		len++;
    }
    return (len);
}

char	*ft_itoa(int n)
{
	int		size;
    char	*p;
    int		i;

    i = 0;
    size = count_size(n);
    p = malloc(sizeof(char) * size + 1);
    if (!(p))
        return (NULL);
	if (n == 0)
      p[0] = '0';
    if (n < 0)
    {
        p[0] = '-';    
        n = -n;
    }
    while (n > 0)
    {
        p[size - 1] = (n % 10) + 48;
        n /= 10;
        size--;

    }
	p[size] = '\0';
    return (p);
}
// int main(void)
// {
//     int x;
//     x = -1111;

//     printf("%s\n", ft_itoa(x));
// }
