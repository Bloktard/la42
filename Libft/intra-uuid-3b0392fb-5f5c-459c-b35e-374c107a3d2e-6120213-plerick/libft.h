/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:08:14 by plerick           #+#    #+#             */
/*   Updated: 2024/10/17 19:21:54 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


ft_strlen(char *str);
ft_isalpha(int c);
ft_isdigit(int c);
ft_isalnum(int c);
ft_isascii(int c);
ft_isprint(int c);
ft_toupper(int c);
ft_tolower(int c);
ft_atoi(const char *str);
ft_strnstr(const char *str, const char *to_find, size_t len);
ft_memset(void *str, int to_include, size_t n);
ft_memmove(void *dest, const void *src, size_t n);
ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_itoa(int nb);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *str);
void	ft_bzero(void *str, size_t n);
