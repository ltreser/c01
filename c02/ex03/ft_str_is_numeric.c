/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:59:48 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/21 01:37:58 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (!(str[i] < 48 || str[i] > 57))
		i++;
	if (str[i] == 0)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char c[] = "574835765784";
	char a;
	a = ft_str_is_numeric(c) + '0';
	write(1, &a, 1);
	return (0);
}*/
