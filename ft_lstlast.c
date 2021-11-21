/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:13:16 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/19 19:32:56 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next)
    {
        lst = lst->next;    
    }
    return (lst);
}
int main()
{
    t_list *n1 = ft_lstnew("ana");
    t_list *n2 = ft_lstnew("oui");
    t_list *n3 = ft_lstnew("la");


    n1->next = n2;
    n2->next = n3;
    t_list *n4 = ft_lstlast();
    if (n4)
        printf("%s\n", n4->content);
}