/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:49:18 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/14 16:05:06 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	if (s == NULL)
			return 0;
	while (s[i])
	{
		i++;
	}
	return i;
}
/*int main()
{
	char *a = NULL;
	printf("%d", ft_strlen(a));
}*/
