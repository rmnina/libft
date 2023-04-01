/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:37:25 by jdufour           #+#    #+#             */
/*   Updated: 2023/04/01 12:56:29 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    ptr = malloc(nmemb * size);
    if (!(ptr))
        return (NULL);
    if ((nmemb * size) / size != nmemb)
		return (NULL);
    ft_memset(ptr, 0, nmemb * size);
    return (ptr);
}