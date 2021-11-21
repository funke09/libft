/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:58:21 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/19 19:09:07 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    
    count = 0;
    while (lst)
    {
        lst = lst->next;
        count++;       
    }
    return (count);
}
int main()
{
    t_list *n1 = ft_lstnew("ana");
    t_list *n2 = ft_lstnew("ana");
    t_list *n3 = ft_lstnew("ana");

    n1->next = n2;
    n2->next = n3;

    printf("%d\n", ft_lstsize(n1));
    
}