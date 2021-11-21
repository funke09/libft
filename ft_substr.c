/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:06:10 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/17 05:34:31 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	char	*c;

	i = 0;
	p = malloc(len * sizeof(char) + 1);
	if (!p || !s)
		return (NULL);
	c = (char *)s;
	while (len > 0)
	{
		p[i] = c[start];
		i++;
		start++;
		len--;
	}
	p[i] = '\0';
	return (p);
}
