/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:04:44 by kkc               #+#    #+#             */
/*   Updated: 2024/11/18 20:32:42 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_printf(const char *str, ...);
int		ft_fspecifier(va_list args, const char fspecifier);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printbasedigit(long nbr, int base);
int		ft_printuphex(unsigned int x);
int		ft_printpointer(void *ptr);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
int		ft_memcmp(const void *a1, const void *a2, size_t size);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memset(void *block, int c, size_t size);
void	ft_bzero(void *block, size_t size);
void	*ft_memchr(const void *block, int c, size_t size);
void	*ft_memcpy(void *to, const void *from, size_t size);
void	*ft_memmove(void *to, const void *from, size_t size);
size_t	ft_strlcpy(char *to, const char *from, size_t size);
size_t	ft_strlcat(char *to, const char *from, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);

#endif
