/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:35:41 by logkoege          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/01 15:08:36 by logkoege         ###   ########.fr       */
=======
/*   Updated: 2024/06/25 17:26:32 by logkoege         ###   ########.fr       */
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

void	ft_bzero(void *s1, size_t n);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
char	*ft_strdup(char *s1);
<<<<<<< HEAD
int		ft_free(char *str);
char	*copy_cat(char *dest, char *dbu, char *fin);
=======
int     ft_free(char *str);
char	*copy_cat(char *dbu, char *fin, char *dest);
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
char	*ft_strncpy(char *str, char *s2, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_split(char *tab, char c);

#endif