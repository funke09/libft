/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:31:01 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/05 16:43:05 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t 	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int s;

	i = 0;
	s = 0;
	while (src[s])
		s++;
	if (size == 0)
		return (s);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);	
}
/*int main()
{
	char s[6] = "zineb";
	char d[6] = "abch";
	printf("%zu", ft_strlcpy(s, d, 4));
}*/
