/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:33:13 by jdufour           #+#    #+#             */
/*   Updated: 2023/04/01 14:08:51 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
        return (NULL);
    while (i < size)
    {
        piece[i] = s[i];
        i++;
    }
    piece[i] = '\0';
    return (piece);  
}

void    ft_free(char **res)
{
    int i;

    i = 0;
    while(res[i])
        i++;
    while (i >= 0 && res[i])
    {
        free(res[i]);
        i--;
    }
    free (res);
}

char    **ft_split(const char *s, char c)
{
    int i;
    int count;
    char    **res;

    i = 0;
    count = ft_count(s, c);
    res = malloc(sizeof(char *) * (count + 1));
    if (!(res))
        return (NULL);
    while (i < count)
    {
        if (*s != c)
        {
            res[i] = ft_create_pieces(s, c);
            if (!(res[i]))
            {
                ft_free(res);
                return (NULL);
            }
            while (*s != c)
                s++; 
            i++;
        }
        if (*s == c)
            while (*s == c)
                s++;
    }
    res[i] = NULL;
    return (res);
}
/*
int main()
{
    char **res;
    
    res = ft_split("tripouille", ' ');
    for (int i = 0; i < 1; i++)
    {
        printf("%s\n", res[i]);
    }
}
*/