/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:34:44 by ltreser           #+#    #+#             */
/*   Updated: 2023/03/01 21:30:32 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb % i != 0)
		i++;
	if (i != nb)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	int	i;

	i = 7;
	i = ft_is_prime(2147483647);
	printf("%d", i);
	return (0);
}*/
