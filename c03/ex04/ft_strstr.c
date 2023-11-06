/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:56:09 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/23 00:52:11 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0'
			&& to_find[j] != '\0')
			j++;
		if (to_find [j] == '\0')
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char c[] = "find this in a string";
	char d[] = "this";
	printf("%s", ft_strstr(c, d));
	return (0);
}*/
