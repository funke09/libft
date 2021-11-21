/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:03:34 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/16 02:45:39 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_isalpha(int ana)

{
	if ((ana >= 'A' && ana <= 'Z') || (ana >= 'a' && ana <= 'z'))
	{
		return (1);
	}
	return 0;
}
/*int main ()
{
	char c = '+';
	printf("%d", ft_isalpha(c));
}*/
