/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:36:05 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/31 11:36:07 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t	j;
	char *substr;
	
	i = 0;
	j = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (!(substr))
		return (NULL);
	while (i < start && s[i])
		i++;
	while (j < len && s[i])
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[i] = '\0';
	return (substr);
}