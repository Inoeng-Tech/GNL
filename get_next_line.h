/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 21:56:44 by afridasufi        #+#    #+#             */
/*   Updated: 2021/10/16 14:18:52 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define MAX_FD 4096

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen_nl(const char *S);
int		ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *str, size_t dstsize);
void	ft_free(char *ptr);
char	*set_n_return(char *buff, char **line);
char	*set_line(char *bufff, char **line);

#endif
