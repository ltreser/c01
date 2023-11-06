/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:24:58 by ltreser           #+#    #+#             */
/*   Updated: 2023/03/01 21:26:54 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = 0;
	while (i <= nb)
	{
		nb -= i;
		i += 2;
		sqrt++;
	}
	if (nb != 0)
		return (0);
	else
		return (sqrt);
}
/*
int	main(void)
{
	int i;

	i = -16;
	i = ft_sqrt(i);
	printf("%d", i);
}*/
