/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:48:02 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/10 16:27:42 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
int	ft_memcmp(const void *s1,const void *s2, size_t n)
	{
	size_t	i;
	char *ss1;
	char *ss2;
	
	ss1 = (char*)s1;
	ss2 = (char *)s2;

	i = 0;
	while ((ss1[i] || ss2[i]) &&  (ss1[i] == ss2[i] && i < n - 1))
	{
		i++;
	}
	return ((unsigned char) ss1[i] - (unsigned char) ss2[i]);
}
/*int main()
{
	char s[] = "abc";
	char i[] = "edf";
	printf("%d", ft_memcmp(s,i, 3));
}*/
