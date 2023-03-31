/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <jdufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:14:00 by jdufour           #+#    #+#             */
/*   Updated: 2023/03/31 11:37:01 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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
char    **ft_split(const char *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(char *src, char *dest);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_substr(const char *s, unsigned int start, size_t len);

#endif