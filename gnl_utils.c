/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/03/02 12:02:03 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*saved;

	saved = dst;
	while (*src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (saved);
}

static char	*ft_strcat(char *dst, const char *src)
{
	size_t	dst_len;
	char	*string;

	dst_len = ft_strlen (dst);
	string = dst + dst_len;
	while (*src)
	{
		*string++ = *src++;
	}
	*string = '\0';
	return (dst);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*string;

	if (!s1)
	{
		s1 = malloc (1 * sizeof(char));
		s1[0] = '\0';
	}
	string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!string)
	{
		free (string);
		string = NULL;
		return (NULL);
	}
	ft_strcpy (string, s1);
	ft_strcat (string, s2);
	free (s1);
	return (string);
}

int	ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	if (!s)
		return (1);
	while (s[index] && s[index] != (char )c)
	{
		index++;
	}
	if (s[index] == (char)c)
	{
		return (1);
	}
	return (0);
}

size_t	ft_strlen(const char *s)

{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
