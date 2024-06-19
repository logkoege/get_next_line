/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:35:25 by logkoege          #+#    #+#             */
/*   Updated: 2024/06/19 18:22:25 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	lash_n(char *baks)
{
	int	la_chaine;

	la_chaine = 0;
	while (baks[la_chaine])
	{
		if (baks[la_chaine])
			return (1);
		la_chaine++;
	}
	return (0);
}

int	ft_strlen2(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = lash_n(str);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i + j);
}

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

void	ft_clean(char *src, char *bn)
{
	int	i;

	i = 0;
	if (bn[i] == '\0')
		return ;
	bn++;
	while (bn[i])
	{
		src[i] = bn[i];
		i++;
	}
	src[i] = '\0';
}

void	gratuit(char *str)
{
	str = NULL;
	free(str);
}
