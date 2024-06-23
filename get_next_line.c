/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:34:50 by logkoege          #+#    #+#             */
/*   Updated: 2024/06/21 19:30:19 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	copy_cat(char *dbu, char fin, char dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dbu[i])
	{
		dest[i] = dbu[i];
		i++;
	}
	while (fin[j])
	{
		dest[i + j] = fin[j];
		j++;
	}
	dest[i + j] = '/0';
	ft_free(dbu);
	return (dest);
}

char	*ft_split(char *tab, char c)
{
	int		a;
	int		chr;
	char	*str;

	a = 0;
	chr = 0;
	if (ft_strchr(tab, c) == NULL)
		return (tab);
	while (tab[chr] != c)
		chr++;
	str = malloc(sizeof(char) * (chr + 2));
	while (a < chr)
	{
		str[a] = tab[a];
		a++;
	}
	str[a] = tab[a];
	a++;
	free (tab);
	str[a] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	return (copy_cat(str, s1, s2));
}

char	*ft_strncpy(char *str, char *s2, char c)
{
	int	i;
	int	chr;

	i = 0;
	chr = 0;
	while (s2[chr] && s2[chr] != c)
		chr++;
	if (ft_strlen(s2) == chr)
		return (NULL);
	chr++;
	while (s2[chr])
	{
		str[i] = s2[chr];
		chr++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	int			;
	char		*ligne;
	char		
	static char	buffer[BUFFER_SIZE + 1];

	richard = -1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	





	return (ligne);
}
