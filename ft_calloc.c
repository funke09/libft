/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:57:39 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/10 20:38:59 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}
/*int main() {
  ft_calloc(5,sizeof(int));

  return 0;
}*/
