/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:43:50 by ysakuma           #+#    #+#             */
/*   Updated: 2020/11/04 12:26:11 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef MAX_FD
#  define MAX_FD 256
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

static int		gnl_erroract(char **save, char **line, char *buf);
static int		gnl_overwite(char **save, char **line, char *buf);
static int		gnl_attach(char *buf, char **save, ssize_t len);
static int		gnl_lastact(char **save, char **line, char *buf);
int		get_next_line(int fd, char **line);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif
