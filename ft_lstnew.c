/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:05:45 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/19 18:55:54 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *res;
    
    res = malloc(sizeof(t_list));
    if (!res)
        return (NULL);
    res->content = content;
    res->next = NULL;
    return (res);
}

// int main (void)
// {
//     t_list *tmp;

//     tmp = ft_lstnew(NULL);
//     printf("%s",tmp->content);
//     return 0;
// }

