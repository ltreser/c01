/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:43:28 by ltreser           #+#    #+#             */
/*   Updated: 2023/03/02 21:43:02 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	char *str;
	int i;
	int j;
	int len;
	int k;
	
	i = 0;
	len = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[i]= '\0';
		return (str);
	}
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	i = 0;
	while(sep[i])
	{
		len = len + (size - 1);
		i++;
	}
	len++;
	str = (char *) malloc(sizeof(char) * len);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < (size -1))
		{
			str[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	char *str;

	str = ft_strjoin(argc, argv, "||");
	printf("%s", str);
	return (0);
}*/
