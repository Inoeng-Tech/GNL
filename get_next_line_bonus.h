/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:59:37 by afridasufi        #+#    #+#             */
/*   Updated: 2021/10/02 16:23:31 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
//# include <fcbtl.h>
# define MAX_FD 4096
# define BUFFER_SIZE 3

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
