/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:01:18 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/10 19:50:58 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int len;
	char *ns1;
	int i;



	len = ft_strlen(s1);
	ns1 = malloc(sizeof(char) * (len + 1));
	if(ns1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ns1[i] = s1[i];
		i++;
	}
	ns1[i] = '\0';
	return (ns1);
}

/*int main(){
	char *new_str;
	
	new_str = ft_strdup("Hello world");
	printf("new string ==> %s\n", new_str);
	return 0;
}*/
