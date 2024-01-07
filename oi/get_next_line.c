/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaasri <ilaasri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:27:59 by ilaasri           #+#    #+#             */
/*   Updated: 2024/01/06 06:22:40 by ilaasri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*ft_strjoin(char *s1, char *s2, size_t len)
{
	char	*res;
	int j = ft_strlen(s1);
	unsigned int lsize;
	lsize = len;
	if (len > (unsigned int)ft_strlen((char *)s2))
		lsize = ft_strlen((char *)s2);
	res = (char *)malloc(sizeof(char) * (j + lsize) + 1);
	res = ft_strcat(s1, s2, lsize);
	return (res);
}

int	micheck (char	*s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
		if (s[i] == '\n' || s[i-1] == '\0' )
			return (i);
	}
	return (-1);
}

 char	*get_next_line(int fd)
{
	char *res;
	static char	*see;
	int i;
	char backto;

	if (fd < 0 || read(fd, &backto, 0) < 0 )
		return (NULL);
	i = -1;
	if(!see)
	{
		see = (char *)malloc(sizeof(char) * 10);
	}
	res = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	//res = (char *)calloc(1, 1);
	// printf("\nsee0--->%s\n", see);
	if (see)
	{
		//printf("res--->%s\n", res);
		ft_strjoin(res , see, ft_strlen(see));
		// printf("res--->%s\n", res);
	}
	if(read(fd, &backto, 1) == -1 || read(fd, &backto, 1) == 0)
	{
		return(NULL);
	}
	else
	{
		while (i == -1)
		{
			read(fd, see , 10);
			i = micheck(see);
			if (i != -1)
			{	
				ft_strjoin(res, see, i + 1);
				//printf("--->see1-->%s\n", see);
				see = see + i + 1;
				//printf("--->see3-->%s\n", see);
				//printf("--->res3-->%s\n", res);
				return (res);
			}
			ft_strjoin(res, see, ft_strlen(see));
		//	printf("--->see2-->%s\n", see);
		//	printf("--->res2-->%s\n", res);
		}
	}
	return (res);
}
/*
int maxlo(int z)
{
	static int x;

	//x = 0;
	x = x + z;
	return (x);
}
*/

int main ()
{
	
	int x = open("atay.txt", O_RDWR) ;
	int y = open("n3as.txt", O_CREAT | O_RDWR);
	char *s = get_next_line(x);
	 char *f = get_next_line(x);
	// char *k = get_next_line(x);
	printf("main1-->%s\n", s);
	printf("main2-->%s\n", f);
	// printf("main3-->%s\n", k);
	
}