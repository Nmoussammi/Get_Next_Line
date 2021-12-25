/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:51:34 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/24 16:13:18 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*get_next_line(int fd);
char	*ft_substr(char *s, int start, int len);
int		check_new_line(char *string);
#endif