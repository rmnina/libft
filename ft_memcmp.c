/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:58:33 by jdufour           #+#    #+#             */
/*   Updated: 2023/04/01 00:42:44 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char    *new_s1;
    unsigned char    *new_s2;
    size_t  i;
    
    new_s1 = (unsigned char *)s1;
    new_s2 = (unsigned char *)s2;
    i = 0;
    while (i < n && n > 0)
    {
       if (new_s1[i] != new_s2[i])
            return (new_s1[i] - new_s2[i]);
        i++;
    }
    return (0);
}