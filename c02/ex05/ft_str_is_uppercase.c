/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:53:43 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/21 02:03:45 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 91))
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
	a = ft_str_is_uppercase(c) + '0';
	write(1, &a, 1);
	return (0);
}*/
