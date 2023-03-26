/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:50:05 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/22 22:59:50 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strchr(const char *str, int searchedChar)
{
    while (*str)
    {
        if (*str == searchedChar)
            return (str);
        str++;
    }
    return (NULL);
}