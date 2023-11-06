/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:03:42 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/21 21:26:08 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int 	main(void)
{
	int i;
	char c[] = "grghjHHBFVbfdhfbdWTWDG";

	i = 0;
	ft_strlowcase(c);
	while (c[i])
		i++;
	write(1, &c, i);
}*/	
