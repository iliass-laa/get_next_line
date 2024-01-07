/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaasri <ilaasri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:29:24 by ilaasri           #+#    #+#             */
/*   Updated: 2024/01/04 18:45:10 by ilaasri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10

#endif

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		ft_strlen(char	*s);
char	*ft_strdup(char *s);
char	*ft_strcat(char	*dst,  char *src, size_t dstsize);
char	*ft_strjoin(char *s1,  char *s2, size_t len);
char	*get_next_line(int fd);


#endif
