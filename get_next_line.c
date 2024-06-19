/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:34:50 by logkoege          #+#    #+#             */
/*   Updated: 2024/06/19 18:33:26 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_read(int fd, void *buffer, int size)
{
	int	i;

	i = read (fd, buffer, size);
	if (i == -1)
		return (-1);
	((char *) buffer)[i] = '\0';
	return (i);
}

char	*swap_and_clear(char *src, char *dest, char *bn)
{
	int		i;
	int		j;
	int		len_src;
	int		len_dest;
	char	*str;

	i = -1;
	j = -1;
	len_src = ft_strlen2(src);
	len_dest = ft_strlen2(dest);
	if (!(len_src + len_dest))
		return ("");
	str = malloc(sizeof(char) * (len_src + len_dest + 1));
	if (!str)
		return (NULL);
	while (i++ < len_dest)
		str[i] = dest[i];
	while (j++ < len_src)
		str[i + j] = src[j];
	str[i + j] = '\0';
	gratuit(str);
	ft_clean(src, bn);
	return (str);
}

char	*get_next_line(int fd)
{
	int			richard;
	char		*ligne;
	static char	buffer[BUFFER_SIZE + 1];

	richard = -1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (buffer[0] == '\0')
	{
		richard = ft_read(fd, buffer, BUFFER_SIZE);
		if (richard == -1)
			return (NULL);
	}
	ligne = swap_and_clear(buffer, "", ft_strchr(buffer, '\n'));
	while (!lash_n(ligne))
	{
		richard = ft_read(fd, buffer, BUFFER_SIZE);
		if (richard == -1 || (richard == 0 && !ligne[0]))
			return (NULL);
		ligne = swap_and_clear(buffer, ligne, ft_strchr(buffer, '\n'));
		if (richard == 0)
			return (ligne);
	}
	return (ligne);
}
