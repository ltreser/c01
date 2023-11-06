/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:55:08 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/21 21:46:35 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	s1[] = "I contain a weird sign ^.^";
	char	s2[] = "Ionlycontaincharacters";
	char	s3[] = "";
	int	a = ft_str_is_alpha(s1) + '0';
	int	b = ft_str_is_alpha(s2) + '0';
	int	c = ft_str_is_alpha(s3) + '0';
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
	write (1, "\n", 1);
	write (1, &c, 1);
	return (0);
}*/		
