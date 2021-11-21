/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:19:52 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/19 18:56:49 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!(*lst))
    {
       *lst = new ;
        return;
    }
    new->next = *lst;
    *lst = new;
}

int main(void)
{
    t_list *n1 = ft_lstnew("Hello");
    t_list *n2 = ft_lstnew("World");
    t_list *n3 = ft_lstnew("!");
    
    t_list *new= ft_lstnew("boosni");

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    t_list *tmp;
    tmp = n1;
    while (tmp != NULL)
    {
        printf("%s\t",tmp->content);
        tmp = tmp->next;
    }
    printf("\nBefore adding the new element !\n");
    ft_lstadd_front(&n1,new);

    tmp = n1;
    while (tmp != NULL)
    {
        printf("[%s]",tmp->content);
        tmp = tmp->next;
    }
    printf("\n");
}