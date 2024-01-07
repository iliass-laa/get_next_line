/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaasri <ilaasri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:35:13 by ilaasri           #+#    #+#             */
/*   Updated: 2024/01/04 22:28:27 by ilaasri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(sizeof(char)* ft_strlen(s) + 1);
	while (i < ft_strlen(s))
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
char	*ft_strcat(char	*dst, char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j] && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (dst);
}	

