/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:35:31 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/31 11:35:33 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	size;
	
	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
	
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int	i;
	int	size;
	char	*cat;
	
	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	cat = malloc(sizeof(char) * (size + 1));
	if (!(cat))
		return (NULL);
	cat = ft_strcat(cat, s1);
	cat = ft_strcat(cat, s2);
	return (cat);
}