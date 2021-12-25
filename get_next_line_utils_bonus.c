/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:02:12 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/24 19:26:59 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_substr(char *s, int start, int len)
{
	int		str_len;
	int		i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		new = malloc(1);
	else
	{
		if (len > str_len)
			len = str_len;
		new = (char *)malloc((len + 1) * sizeof(char));
		if (!new)
			return (NULL);
		while (i < len)
			new[i++] = s[start++];
	}
	new[i] = '\0';
	return (new);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		size_s1;
	int		size_s2;
	char	*new;

	if (!s1)
		s1 = ft_strdup("");
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	new = (char *)malloc((size_s1 + size_s2) + 1 * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < size_s2)
		new[i++] = s2[j++];
	new[i] = '\0';
	free(s1);
	return (new);
}

char	*ft_strdup(char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	check_new_line(char *string)
{
	int	i;

	if (!string)
		return (0);
	i = 0;
	while (string[i])
	{
		if (string[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
