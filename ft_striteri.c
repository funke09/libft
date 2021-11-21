/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:11:48 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/17 11:50:01 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
// void name(unsigned int i, char *ptr)
// {
//     printf("%s\n", ptr);
// }
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (s && f)
    {
       i = ft_strlen(s);
       while (j < i)
       {
           (*f)(j, s);
           j++;
           s++;
       } 
    }
}
// int main()
// {
//     char s[] = "hello";
//     void (*f)(unsigned int, char*);
//     f = &name;
//     ft_striteri(s, f);
// }