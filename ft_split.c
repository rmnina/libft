/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:33:13 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/24 17:40:14 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int ft_count(const char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c || (i == 0 && s[i] != c))
        {
            if (s[i + 1] != c && s[i + 1])
                count++;
        }  
        i++;
    }
    return (count);
}

char    *ft_create_pieces(const char *s, char c)
{
    int i;
    int size;
    char    *piece;

    i = 0;
    size = 0;
    while (s[size] && s[size] != c)
        size++;
    piece = malloc(sizeof(char) * (size + 1));
    if (!(piece))
    {
        free(piece);
        return (NULL);
    }
    while (i < size)
    {
        piece[i] = s[i];
        i++;
    }
    piece[i] = '\0';
    return (piece);  
}

char    **ft_split(const char *s, char c)
{
    int i;
    int count;
    char    **res;

    i = 0;
    count = ft_count(s, c);
    res = malloc(sizeof(char*) * (count + 1));
    if (!(res))
    {
        free(res);
        return (NULL);
    }
    while (i < count)
    {
        if (*s != c)
        {
            res[i] = ft_create_pieces(s, c);
            while (*s != c)
                s++; 
            i++;
        }
        if (*s == c)
            while (*s == c)
                s++;
    }
    res[i] == NULL;
    return (res);
}