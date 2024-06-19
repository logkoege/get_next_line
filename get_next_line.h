/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:35:41 by logkoege          #+#    #+#             */
/*   Updated: 2024/06/19 18:52:55 by logkoege         ###   ########.fr       */
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
int		ft_strlen2(char *str);
int		lash_n(char *baks);
int		ft_read(int fd, void *buffer, int size);
char	*swap_and_clear(char *src, char *dest, char *bn);
void	mr_propre(char *src, char *bn);
void	gratuit(char *str);
#endif
