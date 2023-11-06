/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:39:42 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/21 01:52:58 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char c[] = "";
	char a;
	a = ft_str_is_lowercase(c) + '0';
	write(1, &a, 1);
	return (0);
}*/
