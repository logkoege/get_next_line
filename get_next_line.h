/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:35:41 by logkoege          #+#    #+#             */
/*   Updated: 2024/06/21 19:30:24 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
char	*ft_strdup(const char *s1);
void	ft_free(char *str);
char	copy_cat(char *dbu, char fin, char dest);
char	*ft_strncpy(char *str, char *s2, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_split(char *tab, char c);

#endif
