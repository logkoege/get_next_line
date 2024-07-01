/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:34:50 by logkoege          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/01 15:12:47 by logkoege         ###   ########.fr       */
=======
/*   Updated: 2024/06/25 17:31:17 by logkoege         ###   ########.fr       */
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
char	*copy_cat(char *dest, char *dbu, char *fin)
=======
char	*copy_cat(char *dbu, char *fin, char *dest)
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
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
	dest[i + j] = '\0';
	ft_free(dbu);
	return (dest);
}

char	*ft_split(char *tab, char c)
{
	int		i;
	int		chr;
	char	*str;

	i = 0;
	chr = 0;
	if (ft_strchr(tab, c) == NULL)
		return (tab);
	while (tab[chr] != c)
		chr++;
	str = malloc(sizeof(char) * (chr + 2));
	while (i < chr)
	{
		str[i] = tab[i];
		i++;
	}
	str[i] = tab[i];
	i++;
<<<<<<< HEAD
	free(tab);
=======
	free (tab);
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
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
	int			srch_read;
	char		*ligne;
	char		read_in[BUFFER_SIZE + 1];
	static char	apres_n[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ligne = ft_strdup(apres_n);
	ft_bzero(apres_n, BUFFER_SIZE + 1);
	printf("a\n");
	while (ft_strchr(ligne, '\n') == NULL)
	{
		srch_read = read(fd, ligne, BUFFER_SIZE);
		if (srch_read == 0)
			break ;
<<<<<<< HEAD
		if (srch_read < 0)
			return (NULL);
=======
		printf("g\n");
		if (srch_read < 0)
			return (NULL);
		printf("b\n");
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
		read_in[srch_read] = '\0';
		ligne = (ft_strjoin(ligne, read_in));
		break ;
	}
	ft_strncpy(apres_n, ligne, '\n');
	printf("c\n");
	ligne = ft_split(ligne, '\n');
<<<<<<< HEAD
=======
	printf("d\n");
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
	if (ft_strlen(ligne) == 0)
		return (NULL);
	printf("%s\n", ligne);
	return (ligne);
}
<<<<<<< HEAD

=======
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
int	main(void)
{
	int	fd;

	fd = open("tourpal.txt", O_RDONLY);
<<<<<<< HEAD
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
=======
	printf("%s \n", get_next_line(fd));
>>>>>>> ee84e0f21cba88b27db5debe855b0e762d0432a6
}
