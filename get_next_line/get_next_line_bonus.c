/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:46:55 by lumfred           #+#    #+#             */
/*   Updated: 2021/11/28 11:49:49 by lumfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*make_line(char **str, int chars, char **buf)
{
	int		index;
	char	*line;
	char	*tmp;

	free(*buf);
	tmp = NULL;
	if (chars < 0 || *str == NULL)
		return (NULL);
	if (!chars && !ft_strchr(*str, '\n'))
	{
		line = ft_strdup(*str);
		free(*str);
		*str = NULL;
		return (line);
	}
	index = 0;
	while ((*str)[index] != '\n')
		index++;
	line = ft_substr(*str, 0, index + 1);
	if ((int)ft_strlen(*str) - index - 1 >= 1)
		tmp = ft_substr(*str, index + 1, ft_strlen(*str) - index - 1);
	free(*str);
	*str = tmp;
	return (line);
}

char	*get_next_line(const int fd)
{
	static char	*str[4096];
	char		*buf;
	char		*tmp;
	int			chars;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= 4096)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	chars = read(fd, buf, BUFFER_SIZE);
	while (chars > 0)
	{
		buf[chars] = '\0';
		if (!str[fd])
			tmp = ft_strdup(buf);
		else
			tmp = ft_strjoin(str[fd], buf);
		str[fd] = tmp;
		if (ft_strchr(str[fd], '\n'))
			break ;
		chars = read(fd, buf, BUFFER_SIZE);
	}
	return (make_line(&str[fd], chars, &buf));
}
