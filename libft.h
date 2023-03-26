/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:14:00 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/24 17:39:31 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>

//typedef unsigned long size_t;

int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isprint(char c);
int ft_strlen(char *str);
void    *ft_memset(void *ptr, int value, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t size);
void    *ft_memmove(void *dest, const void *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char    *strchr(const char *str, int searchedChar);
char    *strrchr(const char *str, int searchedChar);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
char    **ft_split(const char *s, char c)

#endif