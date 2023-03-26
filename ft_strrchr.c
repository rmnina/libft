/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:55:37 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/22 23:00:00 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strrchr(const char *str, int searchedChar)
{
    int len;
    
    len = ft_strlen(str);
    while (len > 0)
    {
        if (str[len] == searchedChar)
            return &str[len];
        len--;
    }
    return (NULL);
}