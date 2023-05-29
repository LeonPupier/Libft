/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:31 by lpupier           #+#    #+#             */
/*   Updated: 2023/05/29 11:49:24 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Buffer GNL
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

// Libraires
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

// Lst functions
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_list_char
{
	char				*content;
	struct s_list_char	*next;
}	t_list_char;

// Char
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

// Ft_printf
int			ft_printf(const char *format, ...);
void		ft_putchar_p(char c, int *count);
void		ft_putstr_p(char *str, int *count);
void		ft_display_arg(char c, va_list ap, int *count);
void		ft_putnbr_base(long long unsigned int nbr, \
				long long unsigned int size, char *base, int *count);
void		ft_putnbr(int nbr, int *count);

// Get_next_line
char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
char		*ft_strjoin_g(char *s1, char *s2, size_t idx_max);
char		*ft_strdup(const char *s1);
char		*recover_before_separator(char *str);

// Lst
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_len_tab(char **tab);
void		ft_free_tab(char **tab);

// Mem
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);

// Str
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
long long	ft_atoi(const char *str);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

// Write
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
